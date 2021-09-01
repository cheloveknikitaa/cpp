#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	
public:
	ScavTrap();
	ScavTrap(std::string Name);
	ScavTrap(const ScavTrap &raw);
	ScavTrap &operator=(ScavTrap const &raw);
	~ScavTrap();
	void	guardGate();
};

#endif