#include "Base.hpp"

int main(void)
{
	std::srand(time(NULL));
	std::cout << "<+===============+>" << std::endl;
	Base *ptr = generate();
	Base &ref = *generate();
	identify(ptr);
	identify(ref);
	std::cout << "<+===============+>" << std::endl;

	std::cout << "<+===============+>" << std::endl;
	Base *ptr1 = generate();
	Base &ref2 = *ptr1;
	identify(ptr1);
	identify(ref2);
	std::cout << "<+===============+>" << std::endl;
	return 0;
}
