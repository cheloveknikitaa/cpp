#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iomanip>

class convert
{
private:
	double num;
public:
	convert(const char *input);
	convert(const convert &raw);
	convert &operator=(const convert &raw);
	~convert();
	void toChar();
	void toInt();
	void toDouble();
	void toFloat();

	class convertException : public std::exception
	{
	private:
		const char *error;
	public:
		convertException(const char *str);
		const char *what() const throw();
		virtual ~convertException() throw();
	};
};
