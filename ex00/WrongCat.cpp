#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat constructor called " << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat constructor called " << type << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called " << std::endl;
}

WrongCat::WrongCat(const WrongCat &raw)
{
	*this = raw;
}

WrongCat &WrongCat::operator=(WrongCat const &raw)
{
	WrongAnimal::operator=(raw);
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "meow" << std::endl;
}
