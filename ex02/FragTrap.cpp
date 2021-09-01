#include "FragTrap.hpp"


FragTrap::FragTrap() : ClapTrap()
{
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap activated" << std::endl;
}

FragTrap::FragTrap(const FragTrap &raw)
{
	*this = raw;
}

FragTrap &FragTrap::operator=(FragTrap const &raw)
{
	this->setName(raw.getName());
	this->setHp(raw.getHp());
	this->setEp(raw.getEp());
	this->setAd(raw.getAd());
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Give me high five! - " << this->getName() << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->getName() << " deactivated" << std::endl;
}
