// example usage:
// printf("%s\n", fizz_buzz_v<20>);

#include <algorithm>
#include <cstdio>
#include <type_traits>
#include <utility>

template <std::size_t N>
using seq_t = decltype(std::make_index_sequence<N>());

template <typename...TT>
struct type_list {};

template <std::size_t N>
struct string_literal {
    consteval string_literal(const char(&str)[N]) { 
        std::copy(str, str + N, data); 
    }
    static constexpr std::size_t count = N;
    char data[N];
};

template <char...CC>
struct char_pack {
    static constexpr const char data[sizeof...(CC)] { CC... };
    static constexpr std::size_t count = sizeof...(CC);
};

template <string_literal str>
constexpr auto to_char_pack() {
    return [] <std::size_t...NN> (std::index_sequence<NN...>) {
        return char_pack<str.data[NN]...>{};
    } (seq_t<str.count>{});
}

template <string_literal S, char_pack P = to_char_pack<S>()>
using str_t = std::remove_cvref_t<decltype(P)>;

template <std::size_t N, char...CC>
constexpr auto power_of() {
    if constexpr(N > 0) {
        constexpr char C = '0' + (N % 10);
        return power_of<N / 10, C, CC...>();
    }
    else return char_pack<CC..., '\0'>{};
}

template <std::size_t N>
constexpr auto to_string() {
    if constexpr(N == 0) return str_t<"0">{};
    else return power_of<N>();
}

template <std::size_t N>
constexpr auto fizz_buzz_at() {
    if constexpr(N % 3 == 0 && N % 5 == 0) return str_t<"FizzBuzz">{};
    else if constexpr(N % 3 == 0) return str_t<"Fizz">{};
    else if constexpr(N % 5 == 0) return str_t<"Buzz">{};
    else return to_string<N>();
}

template <std::size_t N>
using fizz_buzz_at_t = decltype(fizz_buzz_at<N>());

template <char C>
inline constexpr char remove_null = (C == '\0' ? '\n' : C);

template <std::size_t N>
struct fizz_buzz {
private:
    template <typename T, typename...TT, char...CC>
    static constexpr auto gen_string_impl(type_list<T, TT...>, char_pack<CC...>) {
        auto new_pack = [] <char...CC2> (char_pack<CC2...>) {
            return char_pack<CC..., remove_null<CC2>...>{};
        } (T{});

        if constexpr(sizeof...(TT) == 0) {
            return [] <char...CC2> (char_pack<CC2...>) {
                return char_pack<CC2..., '\0'>{};
            } (new_pack);
        }
        else return gen_string_impl(type_list<TT...>{}, new_pack);
    }

public:
    static constexpr auto gen_string() {
        auto tl = [] <std::size_t...NN> (std::index_sequence<NN...>) {
            return type_list<fizz_buzz_at_t<NN + 1>...>{};
        } (seq_t<N>{});
        return gen_string_impl(tl, char_pack<>{});
    }
};

template <std::size_t N, typename T = decltype(fizz_buzz<N>::gen_string())>
inline constexpr decltype(T::data)& fizz_buzz_v { T::data };
