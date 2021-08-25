#include <iostream>
#include <string>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	stringA = "HI THIS IS BRAIN";
	std::string	*stringPTR = &stringA;
	std::string	&stringREF = *stringPTR;
	std::cout << "string = " << string << " and address = " << &string << std::endl;
	std::cout << "stringA = " << stringA << " and address = " << &stringA << std::endl;
	std::cout << "*stringPTR = " << *stringPTR << " and address = " << stringPTR << std::endl;
	std::cout << "&stringREF = *stringPTR | stringREF = " << stringREF << " and address = " << &stringREF << std::endl << std::endl;
	stringREF = string;
	std::cout << "&stringREF = string | stringREF = " << stringREF << " and address = " << &stringREF << std::endl << std::endl;
	stringPTR = &string;
	std::cout << "&stringPTR = string | *stringPTR = " << *stringPTR << " and address = " << stringPTR << std::endl << std::endl;

	return (0);
	// int	a = 21;
	// int	b = 42;

	// int	*ptr;
	// std::cout << "int a = " << a << " and address = " << &a << std::endl;
	// std::cout << "int b = " << b << " and address = " << &b << std::endl << std::endl;

	// ptr = &a;
	// std::cout << "ptr = &a | *ptr = " << *ptr << " and address = " << ptr << std::endl;
	// std::cout << "a = " << a << " and address = " << &a << std::endl << std::endl;

	// a += b;
	// std::cout << "a += b | a = " << a << " and address = " << &a << std::endl;
	// std::cout << "*ptr =" << *ptr << " and address = " << ptr << std::endl << std::endl;

	// *ptr -= b;
	// std::cout << "*ptr -= b | *ptr = " << *ptr << " and address = " << ptr << std::endl;
	// std::cout << "a =" << a << " and address = " << &a << std::endl << std::endl;

	// int	&ref = b;
	// std::cout << "int &ref = b | ref = " << ref << " and address = " << &ref << std::endl;
	// std::cout << "b = " << b << " and address = " << &b << std::endl << std::endl;

	// ref -= a;
	// std::cout << "ref -= a | ref = " << ref << " and address = " << &ref << std::endl;
	// std::cout << "b = " << b << " and address = " << &b << std::endl << std::endl;

	// b += a;
	// std::cout << "b += a | b = " << b << " and address = " << &b << std::endl;
	// std::cout << "ref = " << ref << " and address = " << &ref << std::endl << std::endl;

	// ref = *ptr;
	// std::cout << "ref = *ptr | ref = " << ref << " and address = " << &ref << std::endl;
	// std::cout << "b = " << b << " and address = " << &b << std::endl;
	// std::cout << "*ptr = " << *ptr << " and address = " << ptr << std::endl;
	// std::cout << "a = " << a << " and address = " << &a << std::endl << std::endl;

	// b += a;
	// std::cout << "b += a | b = " << b << " and address = " << &b << std::endl;
	// std::cout << "ref = " << ref << " and address = " << &ref << std::endl;
	// std::cout << "*ptr = " << *ptr << " and address = " << ptr << std::endl;
	// std::cout << "a = " << a << " and address = " << &a << std::endl << std::endl;

	return (0);
}