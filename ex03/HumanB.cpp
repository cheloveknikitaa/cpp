# include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

HumanB::HumanB(std::string name, Weapon &weapon) : _name(name) , _weapon(&weapon)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::attack()
{
	if (_weapon == NULL)
		return ;
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
