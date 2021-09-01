#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>
# include <iomanip>

class ClapTrap
{
private:
	std::string		_Name;
	unsigned int	_Hitpoints;
	unsigned int	_Energy_points;
	unsigned int	_Attack_damage;
public:
	ClapTrap(std::string Name);
	void	print_full();
	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	unsigned int	getAd() const;
	std::string	getName() const;
	~ClapTrap();
};

#endif