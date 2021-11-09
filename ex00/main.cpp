#include "whatever.hpp"

int main( void )
{
	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "Swap" << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	Fixed f(10);
	Fixed g(10.1f);
	std::cout << "f = " << f << ", g = " << g << std::endl;
	std::cout << "Swap" << std::endl;
	::swap( f, g );
	std::cout << "f = " << f << ", g = " << g << std::endl;
	std::cout << "min( f, g ) = " << ::min( f, g ) << std::endl;
	std::cout << "max( f, g ) = " << ::max( f, g ) << std::endl;
	return 0;
}