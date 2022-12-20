#ifndef LUPLE_LOOPHOLE_H
#define LUPLE_LOOPHOLE_H

/*
luple: a Lightweight Tuple (C++14)
Author: Alexandr Poltavsky, http://alexpolt.github.io
License: Public-domain software
*/

#include <utility>
#include <type_traits>


namespace luple_ns {

  //type list
  template<typename... TT> struct type_list { 

    static const int size = sizeof...(TT); 

    template<typename... UU> struct add {
      
      using type = type_list< TT..., UU... >;
    };

  };


  //get element type by index
  template<typename T, int N, int M = 0> struct tlist_get;

  template<int N, int M, typename T, typename... TT> struct tlist_get< type_list<T, TT...>, N, M > {

    static_assert(N < (int) sizeof...(TT)+1 + M, "type index out of bounds");

    using type = std::conditional_t< N == M, T, typename tlist_get< type_list<TT...>, N, M + 1 >::type >;
  };

  template<int N, int M> struct tlist_get< type_list<>, N, M > { using type = void; };

  template<int N> struct tlist_get< type_list<>, N, 0 > {};

  template<typename T, int N>
  using tlist_get_t = typename tlist_get<T, N>::type;


  //get element index by type
  template<typename T, typename U, int N = 0> struct tlist_get_n;

  template<typename U, int N, typename T, typename... TT> struct tlist_get_n< type_list<T, TT...>, U, N > {

    static const int value = std::is_same< T, U >::value ? N : tlist_get_n< type_list<TT...>, U, N + 1 >::value;
  };

  template<typename U, int N> struct tlist_get_n< type_list<>, U, N > {

    static const int value = -1;
  };


  //helper template to check for a reference in a parameter pack
  template<typename... TT> struct has_reference;

  template<typename T, typename... TT> 
  struct has_reference< T, TT... > : has_reference< TT... > {};

  template<typename T, typename... TT> 
  struct has_reference< T &, TT... > { 
    
    static const bool value = true;
  };

  template<typename T, typename... TT> 
  struct has_reference< T &&, TT... > { 

    static const bool value = true;
  };

  template<> 
  struct has_reference<> {

    static const bool value = false;
  };


  //forward declaration
  template<typename T> struct luple_t;


  //for sfinae
  template<typename T> struct is_luple {

    static const bool value = false;
  };

  template<typename T> struct is_luple< luple_t<T> > {

    static const bool value = true;
  };


  //a building block that is used in multiple inheritane
  template<typename T, int N> struct luple_element {

    using value_type = tlist_get_t<T, N>;

    value_type _value;
  };


  //base of luple and also parent of luple_element's
  template<typename T, typename U> struct luple_base;

  template<typename... TT, int... NN>
  struct luple_base< type_list<TT...>, std::integer_sequence<int, NN...> > : luple_element< type_list<TT...>, NN >... {

    using tlist = type_list<TT...>;

    //construction
    constexpr luple_base () {}

    template<typename... UU>
    constexpr luple_base ( UU &&... args ) : luple_element< tlist, NN >{ std::forward<UU>( args ) }... {}

    //converting construction
    template<typename U>
    constexpr luple_base ( luple_t<U> const & o ) : luple_element< tlist, NN >{ TT( o.template get<NN>() ) }... {}

    template<typename U>
    constexpr luple_base ( luple_t<U> && o ) : luple_element< tlist, NN >{ TT( std::move( o.template get<NN>() ) ) }... {
      
      static_assert( ! has_reference<TT...>::value, "a converting constructor can't be used with reference template parameters" );
    }

  };


  //luple implementation, T - type_list< ... >

  template<typename T> struct luple_t : luple_base< T, std::make_integer_sequence<int, T::size> > {

    using type_list = T;
    using base = luple_base< T, std::make_integer_sequence< int, T::size > >;

    static const int size = T::size;

    //constructing
    constexpr luple_t () {}
    
    template<typename... UU>
    constexpr luple_t ( UU &&... args ) : base{ std::forward<UU>( args )... } {

      static_assert( sizeof...(UU) == size, "wrong number of arguments" );
    }

    //converting construction
    template<typename U>
    constexpr luple_t ( luple_t<U> & o ) : luple_t{ const_cast< luple_t<U> const & >( o ) } {}

    template<typename U>
    constexpr luple_t ( luple_t<U> const & o ) : base{ o } {

      static_assert( U::size == size, "sizes of luples do not match" );
    }

    template<typename U>
    constexpr luple_t ( luple_t<U> && o ) : base{ std::move( o ) } {

      static_assert( U::size == size, "sizes of luples do not match" );
    }

    //copying a different luple
    template<typename U>
    auto & operator= ( luple_t<U> const & r ) { 

      static_assert( size == U::size, "sizes of luples do not match" );

      return assign_( r, std::make_integer_sequence< int, size >{} );
    }

    template<typename U, int... NN>
    auto & assign_ ( luple_t< U > const & r, std::integer_sequence< int, NN... > ) {

      char dummy[] = { ( get< NN >() = r.template get< NN >(), char{} )... };
      (void) dummy;

      return *this;
    }

    //moving a different luple
    template<typename U>
    auto & operator= ( luple_t<U> && r ) { 

      static_assert( size == U::size, "sizes of luples do not match" );

      return assign_( std::move( r ), std::make_integer_sequence< int, size >{} );
    }

    template<typename U, int... NN>
    auto & assign_ ( luple_t< U > && r, std::integer_sequence< int, NN... > ) {

      char dummy[] = { ( get< NN >() = std::move( r.template get< NN >() ), char{} )... };
      (void) dummy;

      return *this;
    }

    //accessing data
    template<int N> constexpr auto & get () {

      static_assert( N < size, "luple::get -> out of bounds access" );

      return luple_element< T, N >::_value;
    }

    template<typename U> constexpr auto & get () {

      static_assert( tlist_get_n<T, U>::value != -1, "no such type in type list" );

      return luple_element< T, tlist_get_n< T, U >::value >::_value;
    }

    template<int N> constexpr auto & get () const {

      static_assert( N < T::size, "luple::get -> out of bounds access" );

      return luple_element< T, N >::_value;
    }

    template<typename U> constexpr auto & get () const {

      static_assert( tlist_get_n< T, U >::value != -1, "no such type in type list" );

      return luple_element< T, tlist_get_n< T, U >::value >::_value;
    }

  };

  //template alias to wrap types into type_list

  template<typename... TT>
  using luple = luple_t< type_list< TT... > >;


  //get function helpers

  template<int N, typename T> constexpr auto & get ( luple_t<T> & t ) { return t.template get<N>(); }
  template<typename U, typename T> constexpr auto & get ( luple_t<T> & t ) { return t.template get<U>(); }

  template<int N, typename T> constexpr auto & get ( luple_t<T> const & t ) { return t.template get<N>(); }
  template<typename U, typename T> constexpr auto & get ( luple_t<T> const & t ) { return t.template get<U>(); }


  //luple size

  template<typename T> constexpr auto size ( luple_t<T> const & ) { return T::size; }


  //member index from type

  template<typename U, typename T> constexpr auto index ( luple_t<T> const & ) { return tlist_get_n< T, U >::value; }


  //type for index

  template<typename T, int N>
  using element_t = tlist_get_t< typename T::type_list, N >;


  //helper to run code for every member of luple

  template<int... N, typename T0, typename T1>
  constexpr void luple_do_impl ( std::integer_sequence<int, N...>, T0 & t, T1 fn ) {

    //in C++17 we got folding expressions
    char dummy[] = { ( fn( get<N>(t) ), char{} )... };

    (void)dummy;
  }


  //helper to run code for every member of luple

  template<typename T0, typename T1>
  constexpr void luple_do ( T0 & t, T1 fn ) {

    luple_do_impl( std::make_integer_sequence< int, T0::type_list::size >{}, t, fn );
  }
 

  //tie

  template<typename... TT>
  constexpr auto luple_tie ( TT &... args ) {

    return luple< TT &... >{ args... };
  }


  //as_luple( value0, value1 ... ) -> luple< decltype(value0), decltype(value1) ... >

  template<typename... TT>
  constexpr auto as_luple ( TT... args ) {

    return luple< TT... >{ std::move( args )... };
  }


  //relational operators helpers

  template<int N, typename T, typename U, typename = std::enable_if_t< N == T::size >>
  constexpr bool luple_cmp_less ( T &, U & ) { return false; }

  template<int N, typename T, typename U, typename = std::enable_if_t< (N < T::size) >>
  constexpr bool luple_cmp_less ( luple_t< T > const & a, luple_t< U > const & b ) {

    bool less = get<N>( a ) < get<N>( b );
    bool equal = get<N>( a ) == get<N>( b );

    return less ? true : ( equal ? luple_cmp_less< N+1 >( a, b ) : false );
  }

  template<int N, typename T, typename U, typename = std::enable_if_t< N == T::size >>
  constexpr bool luple_cmp_equal ( T &, U & ) { return true; }

  template<int N, typename T, typename U, typename = std::enable_if_t< ( N < T::size ) >>
  constexpr bool luple_cmp_equal ( luple_t<T> const & a, luple_t<U> const & b ) {

    bool equal = get<N>( a ) == get<N>( b );

    return equal ? luple_cmp_equal< N + 1 >( a, b ) : false;
  }


  //relational operators

  template<typename T, typename U>
  constexpr bool operator < ( luple_t<T> const & a, luple_t<U> const & b ) {
    
    static_assert( T::size > 0 && T::size == U::size, "sizes of luples don't match" );

    return luple_cmp_less<0>( a, b );
  }

  template<typename T, typename U>
  constexpr bool operator == ( luple_t<T> const & a, luple_t<U> const & b ) {

    static_assert( T::size > 0 && T::size == U::size, "sizes of luples don't match" );

    return luple_cmp_equal<0>( a, b );
  }


  //the rest are easy

  template<typename T, typename U>
  constexpr bool operator != ( luple_t<T> const & a, luple_t<U> const & b ) { return !( a == b ); }

  template<typename T, typename U>
  constexpr bool operator > ( luple_t<T> const & a, luple_t<U> const & b ) { return b < a; }

  template<typename T, typename U>
  constexpr bool operator <= ( luple_t<T> const & a, luple_t<U> const & b ) { return !( a > b ); }

  template<typename T, typename U>
  constexpr bool operator >= ( luple_t<T> const & a, luple_t<U> const & b ) { return !( a < b ); }


  //swap

  template<typename T>
  constexpr void swap( luple_t<T> & l, luple_t<T> & r ) {

    auto tmp = std::move( l );
    l = std::move( r );
    r = std::move( tmp );
  }

}


//import into global namespace

using luple_ns::luple;
using luple_ns::luple_t;
using luple_ns::get;
using luple_ns::index;
using luple_ns::luple_tie;
using luple_ns::luple_do;
using luple_ns::as_luple;

/*
The Great Type Loophole (C++14)
Author: Alexandr Poltavsky, http://alexpolt.github.io
License: Public-domain software
*/

namespace loophole_ns {
  
  template<typename T, int N>
  struct tag {
    friend auto loophole(tag<T,N>);
    constexpr friend int cloophole(tag<T,N>);
  };

  template<typename T, typename U, int N, bool B>
  struct fn_def {
    friend auto loophole(tag<T,N>) { return U{}; }
    constexpr friend int cloophole(tag<T,N>) { return 0; }
  };

  template<typename T, typename U, int N>
  struct fn_def<T, U, N, true> {};

  template<typename T, int N>
  struct c_op {
    template<typename U, int M> static auto ins(...) -> int;
    template<typename U, int M, int = cloophole(tag<T,M>{}) > static auto ins(int) -> char;

    template<typename U, int = sizeof(fn_def<T, U, N, sizeof(ins<U, N>(0)) == sizeof(char)>)>
    operator U();
  };

  template<typename T, int... NN>
  constexpr int fields_number(...) { return sizeof...(NN)-1; }

  template<typename T, int... NN>
  constexpr auto fields_number(int) -> decltype(T{ c_op<T,NN>{}... }, 0) {
    return fields_number<T, NN..., sizeof...(NN)>(0);
  }

  template<typename T, typename U>
  struct loophole_type_list;

  template<typename T, int... NN>
  struct loophole_type_list< T, std::integer_sequence<int, NN...> > {
    using type = luple_ns::type_list< decltype(loophole(tag<T, NN>{}))... >;
  };

  template<typename T>
  using as_type_list =
    typename loophole_type_list<T, std::make_integer_sequence<int, fields_number<T>(0)>>::type;

}

#endif // LUPLE_LOOPHOLE_H
