#include "header.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void	Contact::set(std::string first_name, std::string last_name, std::string nickname,
				std::string phone_number, std::string darkest_secret)
{
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_phone_number = phone_number;
	_darkest_secret = darkest_secret;
	return ;
}


void	Contact::print_full()
{
	std::string	first_name = "First name: " + _first_name;
	std::string	last_name = "Last name: " + _last_name;
	std::string	nickname = "Nickname: " + _nickname;
	std::string	phone_number = "Phone number: " + _phone_number;
	std::string	darkest_secret = "Darkest secret: " + _darkest_secret;
	int	i = (int)first_name.length();
	if (i < (int)last_name.length())
		i = (int)last_name.length();
	if (i < (int)nickname.length())
		i = (int)nickname.length();
	if (i < (int)phone_number.length())
		i = (int)phone_number.length();
	if (i < (int)darkest_secret.length())
		i = (int)darkest_secret.length();
	i += 2;
	std::cout << "x" << std::setfill('x') << std::setw(i + 1) << "x" << std::endl << std::setfill(' ');
	std::cout << "| " << first_name << std::setw(i - (int)first_name.length()) << " |"<< std::endl;
	std::cout << "| " << last_name << std::setw(i - (int)last_name.length()) << " |"<< std::endl;
	std::cout << "| " << nickname << std::setw(i - (int)nickname.length()) << " |"<< std::endl;
	std::cout << "| " << phone_number << std::setw(i - (int)phone_number.length()) << " |"<< std::endl;
	std::cout << "| " << darkest_secret << std::setw(i - (int)darkest_secret.length()) << " |"<< std::endl;
	std::cout << "x" << std::setfill('x') << std::setw(i + 1) << "x" << std::endl << std::setfill(' ');
}

void	Contact::print_short(int id)
{
	std::cout << "|" << id % 8 + 1 << std::setw(7) << "|";
	if (_first_name.length() > 12)
		std::cout << _first_name.substr(0, 10) << "." << std::setw(2);
	else
		std::cout << _first_name << std::setw(13 - (int)_first_name.length());
	std::cout << "|";
	if (_last_name.length() > 11)
		std::cout << _last_name.substr(0, 9) << "." << std::setw(2);
	else
		std::cout << _last_name << std::setw(12 - (int)_last_name.length());
	std::cout << "|";
	if (_nickname.length() > 10)
		std::cout << _nickname.substr(0, 8) << "." << std::setw(2);
	else
		std::cout << _nickname << std::setw(11 - (int)_nickname.length());
	std::cout << "|" << std::endl;
}
