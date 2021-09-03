#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	this->_type = "cure";
}

Cure::Cure(const Cure &raw)
{
	*this = raw;
}

Cure &Cure::operator=(Cure const &raw)
{
	this->_type = raw._type;
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria *clone = new Cure();
	return clone;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}

Cure::~Cure()
{
}
