#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap activated" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " deactivated" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " have enterred in Gate keeper mode" << std::endl;
}