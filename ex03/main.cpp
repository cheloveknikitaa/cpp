#include <iostream>
#include "Point.hpp"

int main( void ) {
	Point a(2, 5);
	Point b(5, 0);
	Point c(2, -4);
	float	x, y;
	std::cout << "write x, y" << std::endl;
	std::cin >> x >> y;
	std::cout << bsp(a, b, c, Point(x, y));
	return 0;
}
