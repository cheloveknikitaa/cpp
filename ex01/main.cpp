#include "span.hpp"

int main()
{
	Span sp = Span(10);
	sp.addNumber(-5);
	sp.addNumber(-5);
	sp.addNumber(17);
	sp.addNumber(-9);
	sp.addNumber(1);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp << std::endl;
	std::vector<int> myVector;
	for (int count=0; count < 5; ++count)
		myVector.push_back(count);
	sp.addNumber(myVector.begin(), myVector.end());
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp << std::endl;
	try
	{
		sp.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		sp.addNumber(myVector.begin(), myVector.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}