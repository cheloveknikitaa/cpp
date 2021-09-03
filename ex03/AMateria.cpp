#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(std::string const &type) : _type(type)
{}

AMateria::AMateria(const AMateria &raw)
{
	*this = raw;
}

AMateria &AMateria::operator=(AMateria const &raw)
{
	if (this == &raw)
		return (*this);
	this->_type = raw.getType();
	return (*this);
}

AMateria::~AMateria()
{}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* shoots an " << this->getType() << " bolt at " << target.getName() << " *" << std::endl;
}
