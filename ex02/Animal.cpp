#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called " << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal constructor called " << this->_type << std::endl;
}

Animal::Animal(const Animal &raw)
{
	*this = raw;
}

Animal &Animal::operator=(Animal const &raw)
{
	this->_type = raw._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called " << this->_type << std::endl;
}

std::string	Animal::getType() const
{
	return(this->_type);
}
