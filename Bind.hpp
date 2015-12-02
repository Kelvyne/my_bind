#ifndef BIND_HPP_
# define BIND_HPP_

# include "Traits.hpp"
# include "Caller.hpp"

template<typename R, typename P1, typename X1>
Caller<R, R(*)(P1), typename Traits1<X1>::Type>
bind(R(*f)(P1), X1 p1)
{
	typedef typename GetType<X1>::Type Param1;
	typedef TList1<Param1> List;

	List l(p1);
	return Caller<R, R(*)(P1), List>(f, l);
}

template<typename R, typename P1, typename P2, typename X1, typename X2>
Caller<R, R(*)(P1, P2), typename Traits2<X1, X2>::Type>
bind(R(*f)(P1, P2), X1 p1, X2 p2)
{
	typedef typename GetType<X1>::Type Param1;
	typedef typename GetType<X2>::Type Param2;
	typedef TList2<Param1, Param2> List;

	List l(p1, p2);
	return Caller<R, R(*)(P1, P2), List>(f, l);
}

template<typename R,
	typename P1, typename P2, typename P3,
	typename X1, typename X2, typename X3>
Caller<R, R(*)(P1, P2, P3), typename Traits3<X1, X2, X3>::Type>
bind(R(*f)(P1, P2, P3), X1 p1, X2 p2, X3 p3)
{
	typedef typename GetType<X1>::Type Param1;
	typedef typename GetType<X2>::Type Param2;
	typedef typename GetType<X3>::Type Param3;
	typedef TList3<Param1, Param2, Param3> List;

	List l(p1, p2, p3);
	return Caller<R, R(*)(P1, P2, P3), List>(f, l);
}

template<typename R,
	typename P1, typename P2, typename P3, typename P4,
	typename X1, typename X2, typename X3, typename X4>
Caller<R, R(*)(P1, P2, P3, P4), typename Traits4<X1, X2, X3, X4>::Type>
bind(R(*f)(P1, P2, P3, P4), X1 p1, X2 p2, X3 p3, X4 p4)
{
	typedef typename GetType<X1>::Type Param1;
	typedef typename GetType<X2>::Type Param2;
	typedef typename GetType<X3>::Type Param3;
	typedef typename GetType<X4>::Type Param4;
	typedef TList4<Param1, Param2, Param3, Param4> List;

	List l(p1, p2, p3, p4);
	return Caller<R, R(*)(P1, P2, P3, P4), List>(f, l);
}

template<typename R,
	typename P1, typename P2, typename P3, typename P4, typename P5,
	typename X1, typename X2, typename X3, typename X4, typename X5>
Caller<R, R(*)(P1, P2, P3, P4, P5), typename Traits5<X1, X2, X3, X4, X5>::Type>
bind(R(*f)(P1, P2, P3, P4, P5), X1 p1, X2 p2, X3 p3, X4 p4, X5 p5)
{
	typedef typename GetType<X1>::Type Param1;
	typedef typename GetType<X2>::Type Param2;
	typedef typename GetType<X3>::Type Param3;
	typedef typename GetType<X4>::Type Param4;
	typedef typename GetType<X5>::Type Param5;
	typedef TList5<Param1, Param2, Param3, Param4, Param5> List;

	List l(p1, p2, p3, p4, p5);
	return Caller<R, R(*)(P1, P2, P3, P4, P5), List>(f, l);
}

template<typename R,
	typename P1, typename P2, typename P3, typename P4, typename P5, typename P6,
	typename X1, typename X2, typename X3, typename X4, typename X5, typename X6>
Caller<R, R(*)(P1, P2, P3, P4, P5, P6), typename Traits6<X1, X2, X3, X4, X5, X6>::Type>
bind(R(*f)(P1, P2, P3, P4, P5, P6), X1 p1, X2 p2, X3 p3, X4 p4, X5 p5, X6 p6)
{
	typedef typename GetType<X1>::Type Param1;
	typedef typename GetType<X2>::Type Param2;
	typedef typename GetType<X3>::Type Param3;
	typedef typename GetType<X4>::Type Param4;
	typedef typename GetType<X5>::Type Param5;
	typedef typename GetType<X6>::Type Param6;
	typedef TList6<Param1, Param2, Param3, Param4, Param5, Param6> List;

	List l(p1, p2, p3, p4, p5, p6);
	return Caller<R, R(*)(P1, P2, P3, P4, P5, P6), List>(f, l);
}

//Fonctions membre

template<typename R, typename P1, typename P2, typename X1, typename X2>
Caller<R, MemFunc1<R, P1, P2>, typename Traits2<X1, X2>::Type>
bind(R(P1::*f)(P2), X1 p1, X2 p2)
{
	typedef typename GetType<X1>::Type Param1;
	typedef typename GetType<X2>::Type Param2;
	typedef TList2<Param1, Param2> List;
	typedef MemFunc1<R, P1, P2> Func;

	List l(p1, p2);
	Func ff(f);
	return Caller<R, Func, List>(ff, l);
}

template<typename R, typename P1, typename P2, typename P3,
	typename X1, typename X2, typename X3>
Caller<R, MemFunc2<R, P1, P2, P3>, typename Traits3<X1, X2, X3>::Type>
bind(R(P1::*f)(P2, P3), X1 p1, X2 p2, X3 p3)
{
	typedef typename GetType<X1>::Type Param1;
	typedef typename GetType<X2>::Type Param2;
	typedef typename GetType<X3>::Type Param3;
	typedef TList3<Param1, Param2, Param3> List;
	typedef MemFunc2<R, P1, P2, P3> Func;

	List l(p1, p2, p3);
	Func ff(f);
	return Caller<R, Func, List>(ff, l);
}

template<typename R, typename P1, typename P2, typename P3, typename P4,
	typename X1, typename X2, typename X3, typename X4>
Caller<R, MemFunc3<R, P1, P2, P3, P4>, typename Traits4<X1, X2, X3, X4>::Type>
bind(R(P1::*f)(P2, P3, P4), X1 p1, X2 p2, X3 p3, X4 p4)
{
	typedef typename GetType<X1>::Type Param1;
	typedef typename GetType<X2>::Type Param2;
	typedef typename GetType<X3>::Type Param3;
	typedef typename GetType<X4>::Type Param4;
	typedef TList4<Param1, Param2, Param3, Param4> List;
	typedef MemFunc3<R, P1, P2, P3, P4> Func;

	List l(p1, p2, p3, p4);
	Func ff(f);
	return Caller<R, Func, List>(ff, l);
}

template<typename R, typename P1, typename P2, typename P3, typename P4, typename P5,
	typename X1, typename X2, typename X3, typename X4, typename X5>
Caller<R, MemFunc4<R, P1, P2, P3, P4, P5>, typename Traits5<X1, X2, X3, X4, X5>::Type>
bind(R(P1::*f)(P2, P3, P4, P5), X1 p1, X2 p2, X3 p3, X4 p4, X5 p5)
{
	typedef typename GetType<X1>::Type Param1;
	typedef typename GetType<X2>::Type Param2;
	typedef typename GetType<X3>::Type Param3;
	typedef typename GetType<X4>::Type Param4;
	typedef typename GetType<X5>::Type Param5;
	typedef TList5<Param1, Param2, Param3, Param4, Param5> List;
	typedef MemFunc4<R, P1, P2, P3, P4, P5> Func;

	List l(p1, p2, p3, p4, p5);
	Func ff(f);
	return Caller<R, Func, List>(ff, l);
}

template<typename R, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6,
	typename X1, typename X2, typename X3, typename X4, typename X5, typename X6>
Caller<R, MemFunc5<R, P1, P2, P3, P4, P5, P6>, typename Traits6<X1, X2, X3, X4, X5, X6>::Type>
bind(R(P1::*f)(P2, P3, P4, P5, P6), X1 p1, X2 p2, X3 p3, X4 p4, X5 p5, X6 p6)
{
	typedef typename GetType<X1>::Type Param1;
	typedef typename GetType<X2>::Type Param2;
	typedef typename GetType<X3>::Type Param3;
	typedef typename GetType<X4>::Type Param4;
	typedef typename GetType<X5>::Type Param5;
	typedef typename GetType<X6>::Type Param6;
	typedef TList6<Param1, Param2, Param3, Param4, Param5, Param6> List;
	typedef MemFunc5<R, P1, P2, P3, P4, P5, P6> Func;

	List l(p1, p2, p3, p4, p5, p6);
	Func ff(f);
	return Caller<R, Func, List>(ff, l);
}

// Fonctions membre const

template<typename R, typename P1, typename P2, typename X1, typename X2>
Caller<R, MemFunc1<R, P1, P2, R(P1::*)(P2) const>, typename Traits2<X1, X2>::Type>
bind(R(P1::*f)(P2) const, X1 p1, X2 p2)
{
	typedef typename GetType<X1>::Type Param1;
	typedef typename GetType<X2>::Type Param2;
	typedef TList2<Param1, Param2> List;
	typedef MemFunc1<R, P1, P2, R(P1::*)(P2) const> Func;

	List l(p1, p2);
	Func ff(f);
	return Caller<R, Func, List>(ff, l);
}

template<typename R, typename P1, typename P2, typename P3,
	typename X1, typename X2, typename X3>
Caller<R, MemFunc2<R, P1, P2, P3, R(P1::*)(P2, P3) const>, typename Traits3<X1, X2, X3>::Type>
bind(R(P1::*f)(P2, P3) const, X1 p1, X2 p2, X3 p3)
{
	typedef typename GetType<X1>::Type Param1;
	typedef typename GetType<X2>::Type Param2;
	typedef typename GetType<X3>::Type Param3;
	typedef TList3<Param1, Param2, Param3> List;
	typedef MemFunc2<R, P1, P2, P3, R(P1::*)(P2, P3) const> Func;

	List l(p1, p2, p3);
	Func ff(f);
	return Caller<R, Func, List>(ff, l);
}

template<typename R, typename P1, typename P2, typename P3, typename P4,
	typename X1, typename X2, typename X3, typename X4>
Caller<R, MemFunc3<R, P1, P2, P3, P4, R(P1::*)(P2, P3, P4) const>, typename Traits4<X1, X2, X3, X4>::Type>
bind(R(P1::*f)(P2, P3, P4) const, X1 p1, X2 p2, X3 p3, X4 p4)
{
	typedef typename GetType<X1>::Type Param1;
	typedef typename GetType<X2>::Type Param2;
	typedef typename GetType<X3>::Type Param3;
	typedef typename GetType<X4>::Type Param4;
	typedef TList4<Param1, Param2, Param3, Param4> List;
	typedef MemFunc3<R, P1, P2, P3, P4, R(P1::*)(P2, P3, P4) const> Func;

	List l(p1, p2, p3, p4);
	Func ff(f);
	return Caller<R, Func, List>(ff, l);
}

template<typename R, typename P1, typename P2, typename P3, typename P4, typename P5,
	typename X1, typename X2, typename X3, typename X4, typename X5>
Caller<R, MemFunc4<R, P1, P2, P3, P4, P5, R(P1::*)(P2, P3, P4, P5) const>, typename Traits5<X1, X2, X3, X4, X5>::Type>
bind(R(P1::*f)(P2, P3, P4, P5) const, X1 p1, X2 p2, X3 p3, X4 p4, X5 p5)
{
	typedef typename GetType<X1>::Type Param1;
	typedef typename GetType<X2>::Type Param2;
	typedef typename GetType<X3>::Type Param3;
	typedef typename GetType<X4>::Type Param4;
	typedef typename GetType<X5>::Type Param5;
	typedef TList5<Param1, Param2, Param3, Param4, Param5> List;
	typedef MemFunc4<R, P1, P2, P3, P4, P5, R(P1::*)(P2, P3, P4, P5) const> Func;

	List l(p1, p2, p3, p4, p5);
	Func ff(f);
	return Caller<R, Func, List>(ff, l);
}

template<typename R, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6,
	typename X1, typename X2, typename X3, typename X4, typename X5, typename X6>
Caller<R, MemFunc5<R, P1, P2, P3, P4, P5, P6, R(P1::*)(P2, P3, P4, P5, P6) const>, typename Traits6<X1, X2, X3, X4, X5, X6>::Type>
bind(R(P1::*f)(P2, P3, P4, P5, P6) const, X1 p1, X2 p2, X3 p3, X4 p4, X5 p5, X6 p6)
{
	typedef typename GetType<X1>::Type Param1;
	typedef typename GetType<X2>::Type Param2;
	typedef typename GetType<X3>::Type Param3;
	typedef typename GetType<X4>::Type Param4;
	typedef typename GetType<X5>::Type Param5;
	typedef typename GetType<X6>::Type Param6;
	typedef TList6<Param1, Param2, Param3, Param4, Param5, Param6> List;
	typedef MemFunc5<R, P1, P2, P3, P4, P5, P6, R(P1::*)(P2, P3, P4, P5, P6) const> Func;

	List l(p1, p2, p3, p4, p5, p6);
	Func ff(f);
	return Caller<R, Func, List>(ff, l);
}

#endif
