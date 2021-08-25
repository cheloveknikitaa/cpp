# include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

const std::string	&Weapon::getType()
{
	return	(_type);
}
