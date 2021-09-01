#include "ClapTrap.hpp"

int main()
{
	ClapTrap vasya("Vasya");
	ClapTrap lesha("Lesha");
	ClapTrap alexey;

	alexey.print_full();
	alexey = lesha;
	vasya.attack("Lesha");
	alexey.takeDamage(vasya.getAd());
	vasya.beRepaired(10);
	alexey.attack("");
}