#ifndef CALLER_HPP_
# define CALLER_HPP_

template<typename ReturnType, typename C, typename P1,
	typename Type = ReturnType(C::*)(P1)>
struct MemFunc1
{
	MemFunc1(Type f) : _f(f) { }

	template<typename X1, typename X2>
		ReturnType
		operator()(X1* p1, X2& p2)
		{
			return (p1->*_f)(p2);
		}

	private: Type _f;
};

template<typename ReturnType, typename C, typename P1, typename P2,
	typename Type = ReturnType(C::*)(P1, P2)>
struct MemFunc2
{
	MemFunc2(Type f) : _f(f) { }

	template<typename X1, typename X2, typename X3>
		ReturnType
		operator()(X1* p1, X2& p2, X3& p3)
		{
			return (p1->*_f)(p2, p3);
		}


	private: Type _f;
};

template<typename ReturnType, typename C, typename P1, typename P2, typename P3,
	typename Type = ReturnType(C::*)(P1, P2, P3)>
struct MemFunc3
{
	MemFunc3(Type f) : _f(f) { }

	template<typename X1, typename X2, typename X3, typename X4>
		ReturnType
		operator()(X1* p1, X2& p2, X3& p3, X4& p4)
		{
			return (p1->*_f)(p2, p3, p4);
		}

	private: Type _f;
};

template<typename ReturnType, typename C, typename P1, typename P2, typename P3, typename P4,
	typename Type = ReturnType(C::*)(P1, P2, P3, P4)>
struct MemFunc4
{
	MemFunc4(Type f) : _f(f) { }

	template<typename X1, typename X2, typename X3, typename X4, typename X5>
		ReturnType
		operator()(X1* p1, X2& p2, X3& p3, X4& p4, X5& p5)
		{
			return (p1->*_f)(p2, p3, p4, p5);
		}

	private: Type _f;
};

template<typename ReturnType, typename C, typename P1, typename P2,
	typename P3, typename P4, typename P5,
	typename Type = ReturnType(C::*)(P1, P2, P3)>
struct MemFunc5
{
	MemFunc5(Type f) : _f(f) { }

	template<typename X1, typename X2, typename X3,
		typename X4, typename X5, typename X6>
		ReturnType
		operator()(X1* p1, X2& p2, X3& p3, X4& p4, X5& p5, X6& p6)
		{
			return (p1->*_f)(p2, p3, p4, p5, p6);
		}

	private: Type _f;
};

template<typename ReturnType, typename Callable, typename List>
struct Caller
{
	Caller(Callable& callable, List& list)
		: _callable(callable), _list(list)
	{
	}

	ReturnType operator()()
	{
		TList0 l;
		return _list(TypesTraits<ReturnType>(), _callable, l);
	}

	template<typename T1>
	ReturnType operator()(T1 p1)
	{
		TList1<T1 &> l(p1);
		return _list(TypesTraits<ReturnType>(), _callable, l);
	}

	template<typename T1, typename T2>
	ReturnType operator()(T1 p1, T2 p2)
	{
		TList2<T1 &, T2 &> l(p1, p2);
		return _list(TypesTraits<ReturnType>(), _callable, l);
	}

	template<typename T1, typename T2, typename T3>
	ReturnType operator()(T1 p1, T2 p2, T3 p3)
	{
		TList3<T1 &, T2 &, T3 &> l(p1, p2, p3);
		return _list(TypesTraits<ReturnType>(), _callable, l);
	}

	template<typename T1, typename T2, typename T3, typename T4>
	ReturnType operator()(T1 p1, T2 p2, T3 p3, T4 p4)
	{
		TList4<T1 &, T2 &, T3 &, T4 &> l(p1, p2, p3, p4);
		return _list(TypesTraits<ReturnType>(), _callable, l);
	}

	template<typename T1, typename T2, typename T3, typename T4, typename T5>
	ReturnType operator()(T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		TList5<T1 &, T2 &, T3 &, T4 &, T5 &> l(p1, p2, p3, p4, p5);
		return _list(TypesTraits<ReturnType>(), _callable, l);
	}

	template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	ReturnType operator()(T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		TList6<T1 &, T2 &, T3 &, T4 &, T5 &, T6 &> l(p1, p2, p3, p4, p5, p6);
		return _list(TypesTraits<ReturnType>(), _callable, l);
	}

	Callable _callable;
	List _list;
};

#endif
