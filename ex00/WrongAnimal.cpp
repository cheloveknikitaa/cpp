#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called " << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal constructor called " << this->_type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &raw)
{
	*this = raw;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &raw)
{
	this->_type = raw._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called " << this->_type << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return(this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "....." << std::endl;
}
