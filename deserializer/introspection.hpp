#ifndef LUPLE_TYPELOOPHOLE_HPP
#define LUPLE_TYPELOOPHOLE_HPP

#include <utility>
#include <type_traits>

#ifndef DESERIALIZER_FLATTUPLE_HPP
#  error Must include multi_tuple.hpp before introspect!
#endif

#if !defined(__clang__) && defined(__GNUC__)
#  pragma GCC diagnostic push
#  pragma GCC diagnostic ignored "-Wnon-template-friend"
#endif

namespace introspect {
    namespace detail {
        template <typename T, std::size_t N>
        struct tag {
            friend auto loophole(tag<T,N>);
            constexpr friend int cloophole(tag<T, N>);
        };

        template <typename T, typename U, std::size_t N, bool B>
        struct fn_def {
            friend auto loophole(tag<T, N>) { return Tp<U>; }
            constexpr friend int cloophole(tag<T, N>) { return 0; }
        };

        template<typename T, typename U, std::size_t N>
        struct fn_def<T, U, N, true> {};

        template <typename T, std::size_t N>
        struct c_op {
            template <typename U, std::size_t M> static auto ins(...) -> std::size_t;
            template <typename U, std::size_t M, std::size_t = cloophole(tag<T,M>{})> 
            static auto ins(int) -> char;

            template <
                typename U, 
                std::size_t = sizeof(fn_def<T, U, N, sizeof(ins<U, N>(0)) == sizeof(char)>)>
            operator U&();
        };

        template <typename T, std::size_t... NN>
        constexpr std::size_t fields_number(...) { return sizeof...(NN) - 1; }

        template <typename T, std::size_t... NN>
        constexpr auto fields_number(std::size_t) -> decltype(T{ c_op<T,NN>{}... }, 0) {
            return fields_number<T, NN..., sizeof...(NN)>(0);
        }
    }

    template <typename T>
    inline constexpr std::size_t fields_number_v = detail::fields_number<T>(0);

    template <typename T>
    using fields_seq_t = decltype(std::make_index_sequence<fields_number_v<T>>{});

    template <typename T, std::size_t N>
    using tag_t = typename decltype(loophole(detail::tag<T, N>{}))::value;


    namespace detail {
        template <typename T, std::size_t N>
        struct type_list_node {
            static constexpr auto get_type(const godbolt::index_constant<N>&) { 
                return Tp<T>; 
            }
        };

        template <typename, typename...> struct type_list_nodes;

        template <std::size_t...NN, typename...TT>
        struct type_list_nodes<std::index_sequence<NN...>, TT...> : type_list_node<TT, NN>... {
            using type_list_node<TT, NN>::get_type...;

            template <std::size_t N>
            static constexpr auto get(const godbolt::index_constant<N>& n) {
                return get_type(n);
            }
        };
    }
    
    template <typename...TT>
    struct type_list : detail::type_list_nodes<godbolt::seq_t<sizeof...(TT)>, TT...> {
        static constexpr std::size_t count = sizeof...(TT);

        template <std::size_t N>
        constexpr auto operator[](const godbolt::index_constant<N> n) const
            requires (N < sizeof...(TT)) 
        {
            return this->get(n);
        }
    };

    template <> struct type_list<> {};

    template <type_list TL, std::size_t N>
    using type_at = typename decltype(TL[I<N>])::value;


    namespace detail {
        template <typename T>
        struct array_span {
            static constexpr std::size_t value = 1;
        };

        template <typename T, std::size_t N>
        struct array_span<T[N]> {
            static constexpr std::size_t value = N * array_span<T>::value;
        };
    }

    template <typename T, typename U = std::remove_cvref_t<T>>
    inline constexpr std::size_t array_span_v = detail::array_span<U>::value;


    template <typename T, typename> struct unpack_structure;

    template <typename T, std::size_t...NN> 
    struct unpack_structure<T, std::index_sequence<NN...>> {
    private:
        static constexpr std::size_t count = sizeof...(NN);

        template <std::size_t N, type_list TL, typename...TT>
        static constexpr auto organize_args() {
            if constexpr(N < count) {
                using type_of = type_at<TL, N>;
                constexpr std::size_t value = array_span_v<type_of>;

                return organize_args<N + value, TL, TT..., type_of>();
            }
            else return type_list<TT...>{};
        }

    public:
        using type = decltype(organize_args<0, type_list<tag_t<T, NN>...>{}>());
    };

    template <typename T>
    using serialize = typename unpack_structure<T, fields_seq_t<T>>::type;
}

#if !defined(__clang__) && defined(__GNUC__)
#  pragma GCC diagnostic pop
#endif

#endif // LUPLE_TYPELOOPHOLE_HPP
