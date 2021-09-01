#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public virtual ScavTrap, public virtual FragTrap
{
private:
	std::string	_Name;
public:
	DiamondTrap();
	DiamondTrap(std::string Name);
	DiamondTrap(const DiamondTrap &raw);
	DiamondTrap &operator=(DiamondTrap const &raw);
	~DiamondTrap();
	void	whoAmI();
};

#endif