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
	ClapTrap();
	ClapTrap(std::string Name);
	ClapTrap(const ClapTrap &raw);
	ClapTrap &operator=(ClapTrap const &raw);
	~ClapTrap();

	void	print_full();
	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	std::string		getName() const;
	unsigned int	getHp() const;
	unsigned int	getEp() const;
	unsigned int	getAd() const;
	void	setName(std::string Name);
	void	setHp(unsigned int Hitpoints);
	void	setEp(unsigned int Energy_points);
	void	setAd(unsigned int Attack_damage);
};

#endif