#ifndef TRAITS_HPP_
# define TRAITS_HPP_

# include "Lists.hpp"
# include "StorageTypes.hpp"

template<typename T1>
struct Traits1
{
	typedef typename GetType<T1>::Type P1;
	typedef TList1<P1> Type;
};

template<typename T1, typename T2>
struct Traits2
{
	typedef typename GetType<T1>::Type P1;
	typedef typename GetType<T2>::Type P2;
	typedef TList2<P1, P2> Type;
};

template<typename T1, typename T2, typename T3>
struct Traits3
{
	typedef typename GetType<T1>::Type P1;
	typedef typename GetType<T2>::Type P2;
	typedef typename GetType<T3>::Type P3;
	typedef TList3<P1, P2, P3> Type;
};

template<typename T1, typename T2, typename T3,
				typename T4>
struct Traits4
{
	typedef typename GetType<T1>::Type P1;
	typedef typename GetType<T2>::Type P2;
	typedef typename GetType<T3>::Type P3;
	typedef typename GetType<T4>::Type P4;
	typedef TList4<P1, P2, P3, P4> Type;
};

template<typename T1, typename T2, typename T3,
				typename T4, typename T5>
struct Traits5
{
	typedef typename GetType<T1>::Type P1;
	typedef typename GetType<T2>::Type P2;
	typedef typename GetType<T3>::Type P3;
	typedef typename GetType<T4>::Type P4;
	typedef typename GetType<T5>::Type P5;
	typedef TList5<P1, P2, P3, P4, P5> Type;
};

template<typename T1, typename T2, typename T3,
				typename T4, typename T5, typename T6>
struct Traits6
{
	typedef typename GetType<T1>::Type P1;
	typedef typename GetType<T2>::Type P2;
	typedef typename GetType<T3>::Type P3;
	typedef typename GetType<T4>::Type P4;
	typedef typename GetType<T5>::Type P5;
	typedef typename GetType<T6>::Type P6;
	typedef TList6<P1, P2, P3, P4, P5, P6> Type;
};

#endif
