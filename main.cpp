#include <iostream>
#include <string>
#include "Bind.hpp"

int a(int a)
{
	std::cout << "coucou" << std::endl;
	return 0;
}

int b(int a, int b)
{
	std::cout << "coucou" << std::endl;
	return 1;
}

int c(int a, int b, int c)
{
	std::cout << "coucou" << std::endl;
	return 2;
}

int d(int a, int b, int c, int d)
{
	std::cout << "coucou" << std::endl;
	return 3;
}

int e(int a, int b, int c, int d, int e)
{
	std::cout << "coucou" << std::endl;
	return 4;
}

int f(int a, int b, int c, int d, int e, int f)
{
	std::cout << "coucou" << std::endl;
	return 5;
}

struct g
{
	int a(int a)
	{
		std::cout << "g::a " << _x << std::endl;
		return 6;
	}

	int b(int a) const
	{
		std::cout << "g::b const " << _x << std::endl;
		return 7;
	}

	int c(int a, int b)
	{
		std::cout << "g::c " << _x << std::endl;
		return 6;
	}

	int d(int a, int b) const
	{
		std::cout << "g::d const " << _x << std::endl;
		return 7;
	}

	int e(int a, int b, int c)
	{
		std::cout << "g::e " << _x << std::endl;
		return 6;
	}

	int f(int a, int b, int c) const
	{
		std::cout << "g::f const " << _x << std::endl;
		return 7;
	}

	int gg(int a, int b, int c, int d)
	{
		std::cout << "g::g " << _x << std::endl;
		return 7;
	}

	int h(int a, int b, int c, int d) const
	{
		std::cout << "g::h const " << _x << std::endl;
		return 7;
	}

	bool z(int& a, int* addr_a)
	{
		std::cout << &a << " - " << addr_a << std::endl;
		return &a == addr_a;
	}

	bool y(const int& a, int* addr_a) const
	{
		std::cout << &a << " - " << addr_a << std::endl;
		return &a == addr_a;
	}

	private: int _x;
};

int add(int a, int b)
{
	return a + b;
}

int test_complet(int& a, int* addr_a, const std::string& s)
{
	std::cout << s << ' ' << (&a == addr_a) << std::endl;
	return &a == addr_a;
}

int foo(int i, char const *s)
{
	return i;
}

#include <boost/bind.hpp>

int main()
{
	std::cout << bind(a, 1)() << std::endl;
	std::cout << bind(b, 1, 2)() << std::endl;
	std::cout << bind(c, 1, 2, 3)() << std::endl;
	std::cout << bind(d, 1, 2, 3, 4)() << std::endl;
	std::cout << bind(e, 1, 2, 3, 4, 5)() << std::endl;
	std::cout << bind(f, 1, 2, 3, 4, 5, 6)() << std::endl;

	g G;
	std::cout << bind(&g::a, &G, 1)() << std::endl;
	std::cout << bind(&g::b, &G, 1)() << std::endl;
	std::cout << bind(&g::c, &G, 1, 2)() << std::endl;
	std::cout << bind(&g::d, &G, 1, 2)() << std::endl;
	std::cout << bind(&g::e, &G, 1, 2, 3)() << std::endl;
	std::cout << bind(&g::f, &G, 1, 2, 3)() << std::endl;
	std::cout << bind(&g::gg, &G, 1, 2, 3, 4)() << std::endl;
	std::cout << bind(&g::h, &G, 1, 2, 3, 4)() << std::endl;

	int zouz;
	std::cout << bind(&g::z, &G, my_ref(zouz), &zouz)() << std::endl;
	std::cout << bind(&g::y, &G, my_cref(zouz), &zouz)() << std::endl;

	std::cout << std::bind(foo, _1, 1)("coucou") << std::endl;

	std::cout << "1 + 2 : " << bind(add, 1, _A1())(2) << std::endl;
	std::cout << "1 + 4 : " << bind(add, 1, _A1())(4) << std::endl;
	std::cout << "1 + 6 : " << bind(add, 1, _A1())(6) << std::endl;

	bind(test_complet, my_ref(zouz), _A1(), _A2())(&zouz, "message lazy load:");
	std::cout << "test lazy load: " << bind(&g::y, &G, my_cref(zouz), _A1())(&zouz) << std::endl;
}
