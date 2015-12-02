#ifndef STORAGETYPES_HPP_
# define STORAGETYPES_HPP_

template<typename T>
struct Value
{
	Value(const T& v) : _v(v) { }

	T& get() { return _v; }
	const T& get() const { return _v; }

	private: T _v;
};

template<typename T>
struct Ref
{
	Ref(const Ref<T>& r) : _x(r._x) { }
	Ref(T& x) : _x(x) { }

	T& get() { return _x; }
	const T& get() const { return _x; }

	private: T& _x;
};

template<typename T>
Ref<T> my_ref(T& x)
{
	return Ref<T>(x);
}

template<typename T>
Ref<const T> my_cref(const T& x)
{
	return Ref<const T>(x);
}

template<size_t N>
struct Num
{
	const static size_t n = N;
};

typedef Num<1> _N1;
typedef Num<2> _N2;
typedef Num<3> _N3;
typedef Num<4> _N4;
typedef Num<5> _N5;
typedef Num<6> _N6;

template<typename T>
struct ArgFictif
{
	typedef T Num;
};

typedef ArgFictif<_N1> _A1;
typedef ArgFictif<_N2> _A2;
typedef ArgFictif<_N3> _A3;
typedef ArgFictif<_N4> _A4;
typedef ArgFictif<_N5> _A5;
typedef ArgFictif<_N6> _A6;

template<typename T>
struct GetType
{
	typedef Value<T> Type;
};

template<typename T>
struct GetType< Ref<T> >
{
	typedef Ref<T> Type;
};

template<typename T>
struct GetType< ArgFictif<T> >
{
	typedef ArgFictif<T> Type;
};

template<typename T>
struct TypesTraits
{
};

#endif
