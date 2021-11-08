#include "convert.hpp"

int main(int argc, char const **argv)
{
	if (argc != 2)
	{
		std::cout << "Work only with 1 arg" << std::endl;
		return (1);
	}
	convert num(argv[1]);
	num.toChar();
	num.toInt();
	num.toFloat();
	num.toDouble();
	return (0);
}