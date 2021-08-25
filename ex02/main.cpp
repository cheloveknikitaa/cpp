#include <iostream>

int	main()
{
	int	a = 21;
	int	b = 42;

	int	*ptr;
	std::cout << "int a = " << a << " and address = " << &a << std::endl;
	std::cout << "int b = " << b << " and address = " << &b << std::endl << std::endl;

	ptr = &a;
	std::cout << "ptr = &a | *ptr = " << *ptr << " and address = " << ptr << std::endl;
	std::cout << "a = " << a << " and address = " << &a << std::endl << std::endl;

	a += b;
	std::cout << "a += b | a = " << a << " and address = " << &a << std::endl;
	std::cout << "*ptr =" << *ptr << " and address = " << ptr << std::endl << std::endl;

	*ptr -= b;
	std::cout << "*ptr -= b | *ptr = " << *ptr << " and address = " << ptr << std::endl;
	std::cout << "a =" << a << " and address = " << &a << std::endl << std::endl;

	int	&ref = b;
	std::cout << "int &ref = b | ref = " << ref << " and address = " << &ref << std::endl;
	std::cout << "b = " << b << " and address = " << &b << std::endl << std::endl;

	ref -= a;
	std::cout << "ref -= a | ref = " << ref << " and address = " << &ref << std::endl;
	std::cout << "b = " << b << " and address = " << &b << std::endl << std::endl;

	b += a;
	std::cout << "b += a | b = " << b << " and address = " << &b << std::endl;
	std::cout << "ref = " << ref << " and address = " << &ref << std::endl << std::endl;

	ref = *ptr;
	std::cout << "ref = *ptr | ref = " << ref << " and address = " << &ref << std::endl;
	std::cout << "b = " << b << " and address = " << &b << std::endl;
	std::cout << "*ptr = " << *ptr << " and address = " << ptr << std::endl;
	std::cout << "a = " << a << " and address = " << &a << std::endl << std::endl;

	b += a;
	std::cout << "b += a | b = " << b << " and address = " << &b << std::endl;
	std::cout << "ref = " << ref << " and address = " << &ref << std::endl;
	std::cout << "*ptr = " << *ptr << " and address = " << ptr << std::endl;
	std::cout << "a = " << a << " and address = " << &a << std::endl << std::endl;

	return (0);
}