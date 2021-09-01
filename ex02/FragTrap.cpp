#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap activated" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Give me high five! - " << this->getName() << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->getName() << " deactivated" << std::endl;
}
