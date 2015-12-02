#ifndef LISTS_HPP_
# define LISTS_HPP_

# include <stdexcept>
# include "StorageTypes.hpp"
# include "Storages.hpp"

struct TList0
{
	template<typename T> T& operator[](Value<T>& v) { return v.get(); }
	template<typename T> const T& operator[](const Value<T>& v) const
	{ return v.get(); }
	template<typename T> T& operator[](Ref<T>& v) { return v.get(); }
	template<typename T> const T& operator[](const Ref<T>& v) const
	{ return v.get(); }
};

template<typename T1>
struct TList1 : private Storage1<T1>
{
	typedef Storage1<T1> base_t;

	TList1(T1 t1)
		: base_t(t1)
	{
	}

	template<typename T> T& operator[](Value<T>& v) { return v.get(); }
	template<typename T> const T& operator[](const Value<T>& v) const
	{ return v.get(); }
	template<typename T> T& operator[](Ref<T>& v) { return v.get(); }
	template<typename T> const T& operator[](const Ref<T>& v) const
	{ return v.get(); }

	T1& operator[](_A1& v) { return base_t::_t1; }

	template<typename ResultType, typename Callable, typename List>
		ResultType
		operator()(TypesTraits<ResultType>, Callable c, List l)
		{
			return c(l[base_t::_t1]);
		}
};

template<typename T1, typename T2>
struct TList2 : private Storage2<T1, T2>
{
	typedef Storage2<T1, T2> base_t;

	TList2(T1 t1, T2 t2)
		: base_t(t1, t2)
	{
	}

	template<typename T> T& operator[](Value<T>& v) { return v.get(); }
	template<typename T> const T& operator[](const Value<T>& v) const
	{ return v.get(); }
	template<typename T> T& operator[](Ref<T>& v) { return v.get(); }
	template<typename T> const T& operator[](const Ref<T>& v) const
	{ return v.get(); }

	T1& operator[](_A1& v) { return base_t::_t1; }
	T2& operator[](_A2& v) { return base_t::_t2; }

	template<typename ResultType, typename Callable, typename List>
		ResultType
		operator()(TypesTraits<ResultType>, Callable c, List l)
		{
			return c(l[base_t::_t1], l[base_t::_t2]);
		}

};

template<typename T1, typename T2, typename T3>
struct TList3 : private Storage3<T1, T2, T3>
{
	typedef Storage3<T1, T2, T3> base_t;

	TList3(T1 t1, T2 t2, T3 t3)
		: base_t(t1, t2, t3)
	{
	}

	template<typename T> T& operator[](Value<T>& v) { return v.get(); }
	template<typename T> const T& operator[](const Value<T>& v) const
	{ return v.get(); }
	template<typename T> T& operator[](Ref<T>& v) { return v.get(); }
	template<typename T> const T& operator[](const Ref<T>& v) const
	{ return v.get(); }

	T1& operator[](_A1& v) { return base_t::_t1; }
	T2& operator[](_A2& v) { return base_t::_t2; }
	T3& operator[](_A3& v) { return base_t::_t3; }

	template<typename ResultType, typename Callable, typename List>
		ResultType
		operator()(TypesTraits<ResultType>, Callable c, List l)
		{
			return c(l[base_t::_t1], l[base_t::_t2], l[base_t::_t3]);
		}
};

template<typename T1, typename T2, typename T3, typename T4>
struct TList4 : private Storage4<T1, T2, T3, T4>
{
	typedef Storage4<T1, T2, T3, T4> base_t;

	TList4(T1 t1, T2 t2, T3 t3, T4 t4)
		: base_t(t1, t2, t3, t4)
	{
	}

	template<typename T> T& operator[](Value<T>& v) { return v.get(); }
	template<typename T> const T& operator[](const Value<T>& v) const
	{ return v.get(); }
	template<typename T> T& operator[](Ref<T>& v) { return v.get(); }
	template<typename T> const T& operator[](const Ref<T>& v) const
	{ return v.get(); }

	T1& operator[](_A1& v) { return base_t::_t1; }
	T2& operator[](_A2& v) { return base_t::_t2; }
	T3& operator[](_A3& v) { return base_t::_t3; }
	T4& operator[](_A4& v) { return base_t::_t4; }

	template<typename ResultType, typename Callable, typename List>
		ResultType
		operator()(TypesTraits<ResultType>, Callable c, List l)
		{
			return c(l[base_t::_t1], l[base_t::_t2],
					l[base_t::_t3], l[base_t::_t4]);
		}
};

template<typename T1, typename T2, typename T3, typename T4, typename T5>
struct TList5 : private Storage5<T1, T2, T3, T4, T5>
{
	typedef Storage5<T1, T2, T3, T4, T5> base_t;

	TList5(T1 t1, T2 t2, T3 t3, T4 t4, T5 t5)
		: base_t(t1, t2, t3, t4, t5)
	{
	}

	template<typename T> T& operator[](Value<T>& v) { return v.get(); }
	template<typename T> const T& operator[](const Value<T>& v) const
	{ return v.get(); }
	template<typename T> T& operator[](Ref<T>& v) { return v.get(); }
	template<typename T> const T& operator[](const Ref<T>& v) const
	{ return v.get(); }

	T1& operator[](_A1& v) { return base_t::_t1; }
	T2& operator[](_A2& v) { return base_t::_t2; }
	T3& operator[](_A3& v) { return base_t::_t3; }
	T4& operator[](_A4& v) { return base_t::_t4; }
	T5& operator[](_A5& v) { return base_t::_t5; }

	template<typename ResultType, typename Callable, typename List>
		ResultType
		operator()(TypesTraits<ResultType>, Callable c, List l)
		{
			return c(l[base_t::_t1], l[base_t::_t2],
					l[base_t::_t3], l[base_t::_t4], l[base_t::_t5]);
		}
};

template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct TList6 : private Storage6<T1, T2, T3, T4, T5, T6>
{
	typedef Storage6<T1, T2, T3, T4, T5, T6> base_t;

	TList6(T1 t1, T2 t2, T3 t3, T4 t4, T5 t5, T6 t6)
		: base_t(t1, t2, t3, t4, t5, t6)
	{
	}

	template<typename T> T& operator[](Value<T>& v) { return v.get(); }
	template<typename T> const T& operator[](const Value<T>& v) const
	{ return v.get(); }
	template<typename T> T& operator[](Ref<T>& v) { return v.get(); }
	template<typename T> const T& operator[](const Ref<T>& v) const
	{ return v.get(); }

	T1& operator[](_A1& v) { return base_t::_t1; }
	T2& operator[](_A2& v) { return base_t::_t2; }
	T3& operator[](_A3& v) { return base_t::_t3; }
	T4& operator[](_A4& v) { return base_t::_t4; }
	T5& operator[](_A5& v) { return base_t::_t5; }
	T6& operator[](_A6& v) { return base_t::_t6; }

	template<typename ResultType, typename Callable, typename List>
		ResultType
		operator()(TypesTraits<ResultType>, Callable c, List l)
		{
			return c(l[base_t::_t1], l[base_t::_t2],
					l[base_t::_t3], l[base_t::_t4],
					l[base_t::_t5], l[base_t::_t6]);
		}
};

#endif
