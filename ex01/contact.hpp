#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "header.hpp"

class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
public:
	Contact();
	~Contact();
	void	set(std::string	first_name,
			std::string	last_name,
			std::string	nickname,
			std::string	phone_number,
			std::string	darkest_secret);
	void	print_full();
	void	print_short(int id);
};

#endif
