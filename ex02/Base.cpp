#include "Base.hpp"

Base::~Base() {}

Base * generate(void)
{
	// std::srand(time(NULL));
	int i = std::rand() % 3;
	if (i == 0)
		return (new A());
	else if (i == 1)
		return (new B());
	else
		return (new C());
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A class" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B class" << std::endl;
	else
		std::cout << "C class" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A class" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "B class" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "C class" << std::endl;
		}
	}
}
