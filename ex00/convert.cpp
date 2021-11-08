#include "convert.hpp"

convert::convert(const char *input)
{
	char *str = NULL;
	this->num = std::strtod(input, &str);
	std::cout << str << std::endl;
	if (str == input)
		throw convertException("Only the decimal notation will be used.");
	if (*str)
		throw convertException("You have junk after numbers");
}

convert::convert(const convert &raw)
{
	*this = raw;
}

convert &convert::operator=(const convert &raw)
{
	this->num = raw.num;
	return (*this);
}

convert::~convert()
{
}

void convert::toChar()
{
	std::cout << "char: ";
	if (isprint(this->num))
	{
		char a = static_cast<char>(this->num);
		std::cout << "'" << a << "'" << std::endl;
	}
	else if (num < 0 || num > UCHAR_MAX || isnan(this->num) || isinf(this->num))
	{
		std::cout << "impossible" << std::endl;
	}
	else
		std::cout << "Non displayable" << std::endl;
}

void convert::toInt()
{
	std::cout << "int: ";
	if (isnan(this->num) || isinf(this->num))
		std::cout << "impossible" << std::endl;
	else if (this->num < INT_MIN || this->num > __INT_MAX__)
		std::cout << "Overflow" << std::endl;
	else
	{
		int b = static_cast<int>(this->num);
		if (this->num != 0 && b == 0)
			std::cout << "Overflow" << std::endl;
		else
			std::cout << b << std::endl;
	}
}

void convert::toDouble()
{
	std::cout << "double: ";
	if (!isnan(this->num) && !isinf(this->num) && (this->num < __DBL_MIN__ || this->num > __DBL_MAX__))
		std::cout << "Overflow" << std::endl;
	else
	{
		double b = static_cast<double>(this->num);
		if (this->num != 0 && b == 0)
			std::cout << "Overflow" << std::endl;
		else
			std::cout << std::fixed << std::setprecision(1) << b << std::endl;
	}
}

void convert::toFloat()
{
	std::cout << "float: ";
	if (!isnan(this->num) && !isinf(this->num) && (this->num < __FLT_MIN__ || this->num > __FLT_MAX__))
		std::cout << "Overflow" << std::endl;
	else
	{
		float b = static_cast<float>(this->num);
		if (this->num != 0 && b == 0)
			std::cout << "Overflow" << std::endl;
		else
			std::cout << std::fixed << std::setprecision(1) << b << "f" << std::endl;
	}
}

convert::convertException::convertException(const char *str) : error(str) { }
const char *convert::convertException::what() const throw() { return (this->error); }
convert::convertException::~convertException() throw() { }
