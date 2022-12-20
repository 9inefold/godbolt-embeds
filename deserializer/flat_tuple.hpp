#ifndef DESERIALIZER_FLATTUPLE_HPP
#define DESERIALIZER_FLATTUPLE_HPP

#include <cstddef>
#include <type_traits>
#include <utility>

namespace godbolt {
    template <std::size_t N>
    using integral = std::integral_constant<std::size_t, N>;

    template <std::size_t N>
    using seq = decltype(std::make_index_sequence<N>());

    template <std::size_t N>
    constexpr auto I = integral<N>{};

    template <typename T>
    struct type {
        using value = T;
    };

    template <typename...TT>
    struct types {};

    template <typename U>
    constexpr auto T = type<U>{};

    template <typename> struct pointer;

    template <typename R, typename...Args>
    struct pointer<R(*)(Args...)> {
        using ret = R;
        using base = void;
        using args = types<Args...>;
    };

    template <typename R, typename O, typename...Args>
    struct pointer<R(O::*)(Args...)> {
        using ret = R;
        using base = O;
        using args = types<Args...>;
    };

    template <typename R, typename O, typename...Args>
    struct pointer<R(O::*)(Args...) const> {
        using ret = R;
        using base = O;
        using args = types<Args...>;
    };


    namespace detail {
        template <std::size_t N, typename T>
        struct tuple_leaf {
            static constexpr std::size_t value = N;
            using tp = T;
            T data;

            constexpr T&
            get_self(const integral<N>&) {
                return data;
            }

            constexpr const T&
            get_self(const integral<N>&) const {
                return data;
            }


            constexpr std::size_t
            self_index(const type<T>&) const {
                return N;
            }


            constexpr type<T>
            self_type(const integral<N>&) const {
                return {};
            }
        };

        template <typename /* sequence */, typename...> struct tuple_elements;

        template <std::size_t...NN, typename...TT>
        struct tuple_elements<std::index_sequence<NN...>, TT...> : tuple_leaf<NN, TT>... {
            using tuple_leaf<NN, TT>::get_self...;
            using tuple_leaf<NN, TT>::self_index...;
            using tuple_leaf<NN, TT>::self_type...;

            template <std::size_t N>
            constexpr decltype(auto)
            get_member(const integral<N>& i) {
                return get_self(i);
            }

            template <std::size_t N>
            constexpr decltype(auto)
            get_member(const integral<N>& i) const {
                return get_self(i);
            }


            template <typename T>
            constexpr std::size_t
            get_index(const type<T>& t) const {
                return self_index(t);
            }


            template <std::size_t N>
            constexpr auto
            get_type(const integral<N>& i) {
                return self_type(i);
            }

            template <std::size_t N>
            constexpr auto
            get_type(const integral<N>& i) const {
                return self_type(i);
            }
        };

        template <typename...TT>
        tuple_elements(TT&&...tt) -> tuple_elements<seq<sizeof...(TT)>, TT...>;
    }


    template <typename...TT>
    struct tuple {
        using self_type = detail::tuple_elements< seq<sizeof...(TT)>, TT... >;
        self_type data;

        static constexpr std::size_t count = sizeof...(TT);

        template <std::size_t N>
        constexpr decltype(auto)
        get(const integral<N> i) {
            static_assert(N < count, "Index out of range!");
            return data.get_member(i);
        }

        template <std::size_t N>
        constexpr decltype(auto)
        get(const integral<N> i) const {
            static_assert(N < count, "Index out of range!");
            return data.get_member(i);
        }

        template <std::size_t N>
        constexpr decltype(auto)
        get() {
            static_assert(N < count, "Index out of range!");
            return data.get_member(I<N>);
        }

        template <std::size_t N>
        constexpr decltype(auto)
        get() const {
            static_assert(N < count, "Index out of range!");
            return data.get_member(I<N>);
        }

        template <typename T>
        constexpr std::size_t
        get(const type<T> t) const {
            return data.get_index(t);
        }


        template <std::size_t N>
        constexpr decltype(auto)
        operator[](const integral<N> i) {
            static_assert(N < count, "Index out of range!");
            return data.get_member(i);
        }

        template <std::size_t N>
        constexpr decltype(auto)
        operator[](const integral<N> i) const {
            static_assert(N < count, "Index out of range!");
            return data.get_member(i);
        }

        template <typename T>
        constexpr std::size_t
        operator[](const type<T> t) const {
            return data.get_index(t);
        }


        template <std::size_t N>
        constexpr auto
        type_at(const integral<N> i) const {
            return data.get_type(i);
        }
    };

    template <typename...TT>
    tuple(TT&&...tt) -> tuple<TT...>;

    template <typename> struct is_tuple : std::false_type {};

    template <typename...TT>
    struct is_tuple<tuple<TT...>> : std::true_type {};

    template <typename T>
    constexpr bool is_tuple_v = is_tuple<T>::value;

    template <typename...TT>
    constexpr auto
    tie(TT&...tt) {
        return tuple<TT&...>{ tt... };
    }

    template <typename...TT>
    constexpr auto
    forward_as_tuple(TT&&...tt) {
        return tuple { std::forward<TT>(tt)... };
    }
}

namespace std {
    template <typename...TT>
    struct tuple_size<godbolt::tuple<TT...>>
            : integral_constant<::size_t, sizeof...(TT)> {};

    template <::size_t N, typename...TT>
    struct tuple_element<N, godbolt::tuple<TT...>> {
        using type = typename decltype(declval<godbolt::tuple<TT...>>().type_at(godbolt::I<N>))::value;
    };

    template <::size_t N, typename...TT, typename Tup = godbolt::tuple<TT...>>
    tuple_element_t<N, Tup>&
    get(Tup& tup) {
        return tup[godbolt::I<N>];
    }
}

using godbolt::I;
using godbolt::T;
using godbolt::pointer;
using godbolt::tuple;

#endif // DESERIALIZER_FLATTUPLE_HPP
