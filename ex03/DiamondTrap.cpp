#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	return ;
}

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name), ScavTrap(Name), FragTrap(Name)
{
	std::cout << "DiamondTrap activated" << std::endl;
	this->_Name = Name + "_clap_name";
	this->setHp(FragTrap::getHp());
	this->setEp(ScavTrap::getEp());
	this->setAd(FragTrap::getAd());
}

DiamondTrap::DiamondTrap(const DiamondTrap &raw)
{
	*this = raw;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &raw)
{
	this->setName(raw.getName());
	this->setHp(raw.getHp());
	this->setEp(raw.getEp());
	this->setAd(raw.getAd());
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "ClapTrap name " << _Name << std::endl;
	std::cout << "Diamond name " << ClapTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->getName() << " deactivated" << std::endl;
}
