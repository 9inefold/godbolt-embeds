#ifndef STATICWARN_HPP
#define STATICWARN_HPP

#include <cstdio>

template <bool B>
struct warning_impl {
    constexpr static const char data[3] { "%d" };
};

template <>
struct warning_impl<false> {
    constexpr static const char data[3] { "%p" };
};

#define static_warn(cond, msg)  \
do { if(false) { printf(warning_impl<cond>::data, 0); } } while(0)

#endif // STATICWARN_HPP
