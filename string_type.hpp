#include <algorithm>
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
