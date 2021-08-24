#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# include "header.hpp"

class Phone_book
{
private:
	Contact	_contact[8];
	int		_id;
public:
	Phone_book();
	~Phone_book();
	void	add();
	void	search();
	void	man();
};

#endif