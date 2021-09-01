#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap activated" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &raw)
{
	*this = raw;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &raw)
{
	this->setName(raw.getName());
	this->setHp(raw.getHp());
	this->setEp(raw.getEp());
	this->setAd(raw.getAd());
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " deactivated" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " have enterred in Gate keeper mode" << std::endl;
}