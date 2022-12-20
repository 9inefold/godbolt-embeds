#ifndef COMPILERUTILS_HPP
#define COMPILERUTILS_HPP

#if defined(__clang__)
#  define COMPILER_CLANG
#  define $clang
#elif defined(__INTEL_COMPILER)
#  define COMPILER_ICC
#  define $icc
#elif defined(__GNUC__)
#  define COMPILER_GCC
#  define $gcc
#elif defined(_MSC_VER) || defined(_MSVC_LANG)
#  define COMPILER_MSVC
#  define $msvc
#else
#  define COMPILER_UNKNOWN
#  define $compiler_unknown
#endif

#if defined(COMPILER_MSVC)
#  if !defined(_MSVC_LANG)
#    define COMPILER_CPP_VERSION __cplusplus
#  else
#    define COMPILER_CPP_VERSION _MSVC_LANG
#  endif
#else
#  define COMPILER_CPP_VERSION __cplusplus
#endif

#define $cpp_version COMPILER_CPP_VERSION


#define XCONCAT(a, b) a##b
#define CONCAT(a, b) XCONCAT(a, b)
#define $concat(a, b) XCONCAT(a, b)

#define SELF *this
#define $self SELF

#define SELF_T typename std::decay_t<decltype(*this)>
#define $self_t SELF_T

#define EXPAND_ARGS(...) (__VA_ARGS__)
#define $expand_args(...) (__VA_ARGS__)

#endif // COMPILERUTILS_HPP
