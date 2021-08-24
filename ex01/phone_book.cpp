#include "header.hpp"

Phone_book::Phone_book()
{
	_id = 0;
	return ;
}

Phone_book::~Phone_book()
{
	std::cout << "Phone book is closed and burned" << std::endl;
	return ;
}

void	Phone_book::add()
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "Please fill all fields" << std::endl;
	std::cout << "First name: ";
	std::cin >> first_name;
	std::cout << "Last name: ";
	std::cin >> last_name;
	std::cout << "Nickname: ";
	std::cin >> nickname;
	std::cout << "Phone number: ";
	std::cin >> phone_number;
	std::cout << "Darkest secret: ";
	std::cin >> darkest_secret;
	_contact[_id % 8].set(first_name, last_name, nickname, phone_number, darkest_secret);
	_id++;
}

void	Phone_book::search()
{
	int	i = 0;

	if (_id == 0)
	{
		std::cout << "Your phone book is empty (T∩T), add contact \\(!!˚☐˚)/" << std::endl;
		return ;
	}
	std::cout << "x" << std::setfill('x') << std::setw(44) << "x" << std::endl << std::setfill(' ');
	std::cout << "|" << std::setw(10) << "Index" << "|" << std::setw(10) << "First name" << "|" << std::setw(10)<< "Last name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "x" << std::setfill('x') << std::setw(44) << "x" << std::endl << std::setfill(' ');
	while (i < _id && i < 8)
	{
		_contact[i].print_short(i);
		i++;
	}
	std::cout << "x" << std::setfill('x') << std::setw(44) << "x" << std::endl << std::setfill(' ');
	std::cout << std::endl << std::endl << "Write index for show contact or other to quit" << std::endl;

	std::string buf;
	std::cin >> buf;
	if (buf.size() == 1 && buf[0] >= '1' && buf[0] <= '8' && buf[0] <= _id + '0')
		_contact[(buf[0] - '0') - 1].print_full();
}

void	Phone_book::man()
{
	std::cout << "You can use only this commands:" << std::endl;
	std::cout << "\"ADD\" - adding a contact " << std::endl;
	std::cout << "\"SEARCH\" - show your phone book" << std::endl;
	std::cout << "\"EXIT\" - closed your phone book and burned it" << std::endl << std::endl;
}
