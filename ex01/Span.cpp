#include "span.hpp"

Span::Span(unsigned int n) : _N(n), _vec()
{
}

Span::Span(const Span &raw)
{
	*this = raw;
}

Span &Span::operator=(const Span &raw)
{
	this->_N = raw._N;
	this->_vec = raw._vec;
	return (*this);
}

Span::~Span()
{
}

void Span::print(std::ostream &out)
{
	std::vector<int>::iterator it = this->_vec.begin();
	for (; it != this->_vec.end(); it++)
		out << *it << " ";
}

void Span::addNumber(int number)
{
	if (this->_N == this->_vec.size())
		throw std::out_of_range("Can't add, Span is full");
	this->_vec.push_back(number);
	std::sort(this->_vec.begin(), this->_vec.end());
}

int Span::shortestSpan()
{
	if (this->_vec.size() < 2)
		throw std::invalid_argument("Can't use shortest span use, size < 2");
	std::vector<int>::iterator it = this->_vec.begin();
	std::vector<int>::iterator it2;
	int min = (*(it + 1) - *it);
	for (; it != this->_vec.end(); it++)
	{
		it2 = it + 1;
		for (; it2 != this->_vec.end(); it2++)
		{
			if (*it2 != *it && *it2 - *it < min)
				min = *it2 - *it;
		}
	}
	return (min);
}

int Span::longestSpan()
{
	if (this->_vec.size() < 2)
		throw std::invalid_argument("Can't use longest span use, size < 2");
	std::vector<int>::iterator it = this->_vec.begin();
	std::vector<int>::iterator it2;
	int max = (*(it + 1) - *it);
	for (; it != this->_vec.end(); it++)
	{
		it2 = it + 1;
		for (; it2 != this->_vec.end(); it2++)
		{
			if (*it2 != *it && *it2 - *it > max)
				max = *it2 - *it;
		}
	}
	return (max);
}

std::ostream &operator<<(std::ostream &out, Span &raw)
{
	raw.print(out);
	return (out);
}
