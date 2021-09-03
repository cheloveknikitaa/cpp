#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	this->_type = "ice";
}

Ice::Ice(const Ice &raw)
{
	*this = raw;
}

Ice &Ice::operator=(Ice const &raw)
{
	this->_type = raw._type;
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria *clone = new Ice();
	return clone;
}

Ice::~Ice()
{
}
