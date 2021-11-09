#include "iter.hpp"
#include "../ex00/whatever.hpp"

int main(void)
{
	int arr[] = {1, 2, 3, 4};
	::iter(arr, 4, ::print);
	std::cout << std::endl;
	std::string arr_str[] = {"Privet", "Kak", "Dela?"};
	::iter(arr_str, 3, ::print);
	std::cout << std::endl;
	Fixed arr_fix[] = {42.2f, 21, 322};
	::iter(arr_fix, 3, ::print);
	std::cout << std::endl;
	return 0;
}
