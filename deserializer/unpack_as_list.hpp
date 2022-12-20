#ifndef DESERIALIZER_UNPACKASLIST_HPP
#define DESERIALIZER_UNPACKASLIST_HPP

template <typename...>
struct type_pack {};

template <typename T>
constexpr auto unpack_as_list(T&&, std::integral_constant<std::size_t, 0>) {
        return type_pack<>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 1>) {
        auto&& [_0] = t;
        return type_pack<decltype(_0)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 2>) {
        auto&& [_0,_1] = t;
        return type_pack<decltype(_0), decltype(_1)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 3>) {
        auto&& [_0,_1,_2] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 4>) {
        auto&& [_0,_1,_2,_3] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 5>) {
        auto&& [_0,_1,_2,_3,_4] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 6>) {
        auto&& [_0,_1,_2,_3,_4,_5] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 7>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 8>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 9>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 10>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 11>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 12>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 13>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 14>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 15>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 16>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 17>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 18>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 19>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 20>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 21>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 22>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 23>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 24>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 25>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 26>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 27>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 28>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 29>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 30>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 31>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 32>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 33>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 34>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 35>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 36>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 37>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 38>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 39>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 40>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 41>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 42>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 43>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 44>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 45>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 46>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 47>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 48>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 49>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 50>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 51>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 52>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 53>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 54>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 55>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 56>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 57>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 58>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 59>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 60>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 61>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 62>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 63>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 64>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 65>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 66>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 67>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 68>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 69>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 70>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 71>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 72>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 73>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 74>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 75>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 76>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 77>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 78>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 79>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 80>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 81>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79), decltype(_80)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 82>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79), decltype(_80), decltype(_81)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 83>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79), decltype(_80), decltype(_81), decltype(_82)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 84>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79), decltype(_80), decltype(_81), decltype(_82), decltype(_83)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 85>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79), decltype(_80), decltype(_81), decltype(_82), decltype(_83), decltype(_84)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 86>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79), decltype(_80), decltype(_81), decltype(_82), decltype(_83), decltype(_84), decltype(_85)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 87>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85,_86] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79), decltype(_80), decltype(_81), decltype(_82), decltype(_83), decltype(_84), decltype(_85), decltype(_86)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 88>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85,_86,_87] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79), decltype(_80), decltype(_81), decltype(_82), decltype(_83), decltype(_84), decltype(_85), decltype(_86), decltype(_87)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 89>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85,_86,_87,_88] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79), decltype(_80), decltype(_81), decltype(_82), decltype(_83), decltype(_84), decltype(_85), decltype(_86), decltype(_87), decltype(_88)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 90>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85,_86,_87,_88,_89] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79), decltype(_80), decltype(_81), decltype(_82), decltype(_83), decltype(_84), decltype(_85), decltype(_86), decltype(_87), decltype(_88), decltype(_89)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 91>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85,_86,_87,_88,_89,_90] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79), decltype(_80), decltype(_81), decltype(_82), decltype(_83), decltype(_84), decltype(_85), decltype(_86), decltype(_87), decltype(_88), decltype(_89), decltype(_90)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 92>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85,_86,_87,_88,_89,_90,_91] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79), decltype(_80), decltype(_81), decltype(_82), decltype(_83), decltype(_84), decltype(_85), decltype(_86), decltype(_87), decltype(_88), decltype(_89), decltype(_90), decltype(_91)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 93>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85,_86,_87,_88,_89,_90,_91,_92] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79), decltype(_80), decltype(_81), decltype(_82), decltype(_83), decltype(_84), decltype(_85), decltype(_86), decltype(_87), decltype(_88), decltype(_89), decltype(_90), decltype(_91), decltype(_92)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 94>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85,_86,_87,_88,_89,_90,_91,_92,_93] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79), decltype(_80), decltype(_81), decltype(_82), decltype(_83), decltype(_84), decltype(_85), decltype(_86), decltype(_87), decltype(_88), decltype(_89), decltype(_90), decltype(_91), decltype(_92), decltype(_93)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 95>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85,_86,_87,_88,_89,_90,_91,_92,_93,_94] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79), decltype(_80), decltype(_81), decltype(_82), decltype(_83), decltype(_84), decltype(_85), decltype(_86), decltype(_87), decltype(_88), decltype(_89), decltype(_90), decltype(_91), decltype(_92), decltype(_93), decltype(_94)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 96>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85,_86,_87,_88,_89,_90,_91,_92,_93,_94,_95] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79), decltype(_80), decltype(_81), decltype(_82), decltype(_83), decltype(_84), decltype(_85), decltype(_86), decltype(_87), decltype(_88), decltype(_89), decltype(_90), decltype(_91), decltype(_92), decltype(_93), decltype(_94), decltype(_95)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 97>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85,_86,_87,_88,_89,_90,_91,_92,_93,_94,_95,_96] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79), decltype(_80), decltype(_81), decltype(_82), decltype(_83), decltype(_84), decltype(_85), decltype(_86), decltype(_87), decltype(_88), decltype(_89), decltype(_90), decltype(_91), decltype(_92), decltype(_93), decltype(_94), decltype(_95), decltype(_96)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 98>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85,_86,_87,_88,_89,_90,_91,_92,_93,_94,_95,_96,_97] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79), decltype(_80), decltype(_81), decltype(_82), decltype(_83), decltype(_84), decltype(_85), decltype(_86), decltype(_87), decltype(_88), decltype(_89), decltype(_90), decltype(_91), decltype(_92), decltype(_93), decltype(_94), decltype(_95), decltype(_96), decltype(_97)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 99>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85,_86,_87,_88,_89,_90,_91,_92,_93,_94,_95,_96,_97,_98] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79), decltype(_80), decltype(_81), decltype(_82), decltype(_83), decltype(_84), decltype(_85), decltype(_86), decltype(_87), decltype(_88), decltype(_89), decltype(_90), decltype(_91), decltype(_92), decltype(_93), decltype(_94), decltype(_95), decltype(_96), decltype(_97), decltype(_98)>{};
}

template <typename T>
constexpr auto unpack_as_list(T&& t, std::integral_constant<std::size_t, 100>) {
        auto&& [_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85,_86,_87,_88,_89,_90,_91,_92,_93,_94,_95,_96,_97,_98,_99] = t;
        return type_pack<decltype(_0), decltype(_1), decltype(_2), decltype(_3), decltype(_4), decltype(_5), decltype(_6), decltype(_7), decltype(_8), decltype(_9), decltype(_10), decltype(_11), decltype(_12), decltype(_13), decltype(_14), decltype(_15), decltype(_16), decltype(_17), decltype(_18), decltype(_19), decltype(_20), decltype(_21), decltype(_22), decltype(_23), decltype(_24), decltype(_25), decltype(_26), decltype(_27), decltype(_28), decltype(_29), decltype(_30), decltype(_31), decltype(_32), decltype(_33), decltype(_34), decltype(_35), decltype(_36), decltype(_37), decltype(_38), decltype(_39), decltype(_40), decltype(_41), decltype(_42), decltype(_43), decltype(_44), decltype(_45), decltype(_46), decltype(_47), decltype(_48), decltype(_49), decltype(_50), decltype(_51), decltype(_52), decltype(_53), decltype(_54), decltype(_55), decltype(_56), decltype(_57), decltype(_58), decltype(_59), decltype(_60), decltype(_61), decltype(_62), decltype(_63), decltype(_64), decltype(_65), decltype(_66), decltype(_67), decltype(_68), decltype(_69), decltype(_70), decltype(_71), decltype(_72), decltype(_73), decltype(_74), decltype(_75), decltype(_76), decltype(_77), decltype(_78), decltype(_79), decltype(_80), decltype(_81), decltype(_82), decltype(_83), decltype(_84), decltype(_85), decltype(_86), decltype(_87), decltype(_88), decltype(_89), decltype(_90), decltype(_91), decltype(_92), decltype(_93), decltype(_94), decltype(_95), decltype(_96), decltype(_97), decltype(_98), decltype(_99)>{};
}

#endif // DESERIALIZER_UNPACKASLIST_HPP
