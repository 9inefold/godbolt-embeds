//===- Cttypeid.hpp --------------------------------------------------===//
//
// Copyright (C) 2023 Eightfold
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
//     limitations under the License.
//
//===----------------------------------------------------------------===//
//
//  This file allows for reflection over types and values statically.
//
//===----------------------------------------------------------------===//

#ifndef EFL_CTTYPEID_HPP
#define EFL_CTTYPEID_HPP

#include "https://raw.githubusercontent.com/8ightfold/efl-config/main/ConfigSingle.hpp"

#include <array>
#include <iostream>
#include <string_view>
#include <type_traits>

#define INTROSPECT_PRETTY_FUNCTION COMPILER_FUNCTION
#if defined(COMPILER_LLVM)
#  define INTROSPECT_PRETTY_TYPE_START " "
#  define INTROSPECT_PRETTY_AUTO_START " "
#  define INTROSPECT_PRETTY_FUNCTION_START "X = "
#  define INTROSPECT_PRETTY_FUNCTION_END "]\0"
#elif defined(COMPILER_GNU)
#  define INTROSPECT_PRETTY_TYPE_START "with X = "
#  if defined(COMPILER_GCC)
#    define INTROSPECT_PRETTY_AUTO_START "X = "
#  elif defined(COMPILER_ICC) || defined(COMPILER_NVCPP)
#    define INTROSPECT_PRETTY_AUTO_START "X = "
#  endif
#  define INTROSPECT_PRETTY_FUNCTION_START pretty_function_prefix<X>()
#  define INTROSPECT_PRETTY_FUNCTION_END "]\0"
#elif defined(COMPILER_MSVC)
#  define INTROSPECT_PRETTY_TYPE_START " "
#  define INTROSPECT_PRETTY_AUTO_START " "
#  define INTROSPECT_PRETTY_FUNCTION_START "pretty_function_array<"
#  define INTROSPECT_PRETTY_FUNCTION_END ">(void) noexcept\0"
#else
#  undef  INTROSPECT_PRETTY_FUNCTION
#  define INTROSPECT_PRETTY_FUNCTION " <null> "
#  define INTROSPECT_PRETTY_TYPE_START " "
#  define INTROSPECT_PRETTY_AUTO_START " "
#  define INTROSPECT_PRETTY_FUNCTION_START " "
#  define INTROSPECT_PRETTY_FUNCTION_END " \0"
#endif

namespace {
    template <std::size_t...NN>
    CONSTEVAL auto substr_to_array(std::string_view str, std::index_sequence<NN...>) NOEXCEPT
    -> std::array<char, (sizeof...(NN) + 1)> {
        return {{ str[NN]..., '\0' }};
    }

    template <typename>
    CONSTEVAL std::string_view pretty_function_prefix() NOEXCEPT {
        return { INTROSPECT_PRETTY_TYPE_START };
    }

    template <auto>
    CONSTEVAL std::string_view pretty_function_prefix() NOEXCEPT {
        return { INTROSPECT_PRETTY_AUTO_START };
    }
} // namespace `anonymous`

template <typename X>
constexpr auto pretty_function_array() noexcept {
    constexpr std::string_view name   = { INTROSPECT_PRETTY_FUNCTION };
    constexpr std::string_view prefix = { INTROSPECT_PRETTY_FUNCTION_START };
    constexpr std::string_view suffix = { INTROSPECT_PRETTY_FUNCTION_END };
    constexpr std::size_t start = name.find(prefix) + prefix.size();
    constexpr std::size_t end = name.rfind(suffix);
    static_assert(start < end, "Invalid arguments.");

    constexpr std::string_view trimmed = name.substr(start, (end - start));
    return substr_to_array(trimmed, std::make_index_sequence<trimmed.size()>{});
}

template <auto X>
constexpr auto pretty_function_array() noexcept {
    constexpr std::string_view name   = { INTROSPECT_PRETTY_FUNCTION };
    constexpr std::string_view prefix = { INTROSPECT_PRETTY_FUNCTION_START };
    constexpr std::string_view suffix = { INTROSPECT_PRETTY_FUNCTION_END };
    constexpr std::size_t start = name.find(prefix) + prefix.size();
    constexpr std::size_t end = name.rfind(suffix);
    static_assert(start < end, "Invalid arguments.");

    constexpr std::string_view trimmed = name.substr(start, (end - start));
    return substr_to_array(trimmed, std::make_index_sequence<trimmed.size()>{});
}

template <typename T, T X>
constexpr auto pretty_function_array() noexcept {
    constexpr std::string_view name   = { INTROSPECT_PRETTY_FUNCTION };
    constexpr std::string_view prefix = { INTROSPECT_PRETTY_FUNCTION_START };
    constexpr std::string_view suffix = { INTROSPECT_PRETTY_FUNCTION_END };
    constexpr std::size_t start = name.find(prefix) + prefix.size();
    constexpr std::size_t end = name.rfind(suffix);
    static_assert(start < end, "Invalid arguments.");

    constexpr std::string_view trimmed = name.substr(start, (end - start));
    return substr_to_array(trimmed, std::make_index_sequence<trimmed.size()>{});
}

struct CTInfo {
    NODISCARD VCONSTEXPR virtual std::string_view name() CNOEXCEPT = 0;
    friend std::ostream& operator<<(std::ostream& os, const CTInfo& info) {
        return os << info.name();
    }
};

template <typename T>
class CTTI : public CTInfo {
    static constexpr auto pretty { pretty_function_array<T>() };
public:
    NODISCARD VCONSTEXPR std::string_view name() CNOEXCEPT override { return this->value; }
    static constexpr std::string_view value { pretty.data(), pretty.size() - 1 };
};

template <auto V>
class CTVI : public CTInfo {
    static constexpr auto pretty { pretty_function_array<V>() };
public:
    NODISCARD VCONSTEXPR std::string_view name() CNOEXCEPT override { return this->value; }
    static constexpr std::string_view value { pretty.data(), pretty.size() - 1 };
};

template <typename T, T V>
class CTTVI : public CTInfo {
    static constexpr auto pretty { pretty_function_array<T, V>() };
public:
    NODISCARD VCONSTEXPR std::string_view name() CNOEXCEPT override { return this->value; }
    static constexpr std::string_view value { pretty.data(), pretty.size() - 1 };
};


template <typename T>
MAYBE_UNUSED GLOBAL CTTI<T> ctti {};

template <auto V>
MAYBE_UNUSED GLOBAL CTVI<V> ctvi {};

template <auto V>
MAYBE_UNUSED GLOBAL CTTVI<decltype(V), V> cttvi {};


#endif // EFL_CTTYPEID_HPP
