#include "Karen.hpp"

	void	Karen::debug()
	{
		std::cout << "[ DEBUG ]" << std::endl << "I love to get extra bacon for my "
			"7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	}

	void	Karen::info()
	{
		std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon cost more money." << std::endl <<
			"You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	}

	void	Karen::warning()
	{
		std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free." << std::endl <<
			"I’ve been coming here for years and you just started working here last month." << std::endl;
	}

	void	Karen::error()
	{
		std::cout << "[ ERROR ]" << std::endl << "This is unacceptable, I want to speak to the manager now." << std::endl;
	}

	void	Karen::complain(std::string	level)
	{
		int		i = 0;
		std::string	cases[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

		while (i < 4 && cases[i] != level)
			i++;
		switch (i)
		{
		case 0:
			(this->*func[0])();
		case 1:
			(this->*func[1])();
		case 2:
			(this->*func[2])();
		case 3:
			(this->*func[3])();
			break;
		default:
			std::cout << "....." << std::endl;
			break;
		}
	}

Karen::Karen()
{
	func[0] = &Karen::debug;
	func[1] = &Karen::info;
	func[2] = &Karen::warning;
	func[3] = &Karen::error;
}

Karen::~Karen()
{
}
