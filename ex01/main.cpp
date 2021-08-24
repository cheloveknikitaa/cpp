#include "header.hpp"

int	main(void)
{
	Phone_book	Phone_book;
	std::string	input;

	std::cout << "This is phone book, follow the manual!" << std::endl;
	Phone_book.man();
	while (input != "EXIT")
	{
		std::cout << "Write, your command:" << std::endl;
		if (!(std::cin >> input))
			return (0);
		if (input == "ADD")
			Phone_book.add();
		else if (input == "SEARCH")
			Phone_book.search();
		else if (input != "EXIT")
		{
			std::cout << "Wrong command" << std::endl;;
			Phone_book.man();
		}
	}
	return (0);
}