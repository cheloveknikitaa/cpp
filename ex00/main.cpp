#include "ClapTrap.hpp"

int main()
{
	ClapTrap vasya("Vasya");
	ClapTrap lesha("Lesha");

	vasya.attack("Lesha");
	lesha.takeDamage(vasya.getAd());
	vasya.beRepaired(10);
	lesha.attack("");
}