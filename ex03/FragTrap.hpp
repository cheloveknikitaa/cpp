#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
private:
	
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &raw);
	FragTrap &operator=(FragTrap const &raw);
	virtual ~FragTrap();
	void	highFivesGuys(void);
};

#endif