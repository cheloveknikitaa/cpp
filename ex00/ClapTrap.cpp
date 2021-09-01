#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name)
{
	this->_Name = Name;
	this->_Hitpoints = 10;
	this->_Energy_points = 10;
	this->_Attack_damage = 0;
	std::cout << "ANNOUNCER : Ladies and gentlemen, please welcome to the terminal" << std::endl;
	this->print_full();
}

ClapTrap::~ClapTrap()
{
	std::cout << "Farewell, Mr. " << this->_Name << std::endl;
}

void	ClapTrap::print_full()
{
	std::string	Name = "Name: " + _Name;
	std::string	HP = "Hitpoints: " + std::to_string(_Hitpoints);
	std::string	EP = "Energy points: " + std::to_string(_Energy_points);
	std::string	Attack = "Attack damage: " + std::to_string(_Attack_damage);
	int	i = (int)Name.length();
	if (i < (int)HP.length())
		i = (int)HP.length();
	if (i < (int)EP.length())
		i = (int)EP.length();
	if (i < (int)Attack.length())
		i = (int)Attack.length();
	i += 2;
	std::cout << "x" << std::setfill('x') << std::setw(i + 1) << "x" << std::endl << std::setfill(' ');
	std::cout << "| " << Name << std::setw(i - (int)Name.length()) << " |"<< std::endl;
	std::cout << "| " << HP << std::setw(i - (int)HP.length()) << " |"<< std::endl;
	std::cout << "| " << EP << std::setw(i - (int)EP.length()) << " |"<< std::endl;
	std::cout << "| " << Attack << std::setw(i - (int)Attack.length()) << " |"<< std::endl;
	std::cout << "x" << std::setfill('x') << std::setw(i + 1) << "x" << std::endl << std::setfill(' ');
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->_Name << " attack " << target << " , causing "
		<< this->_Attack_damage << " points of damage! " << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_Hitpoints -= amount;
	std::cout << "ClapTrap " << this->_Name << " got attacked, takes " << amount << " damedges."
		<< " Now he have " << this->_Hitpoints << " hitpoints." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_Hitpoints += amount;
	std::cout << "ClapTrap " << this->_Name << " healing on " << amount << " hitpoints."
		<< " Now he have " << this->_Hitpoints << " hitpoints." << std::endl;
}

unsigned int	ClapTrap::getAd()
{
	return (this->_Attack_damage);
}
