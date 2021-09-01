#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap vasya("Vasya");

	vasya.attack("Lesha");
	vasya.takeDamage(15);
	vasya.beRepaired(30);
	vasya.highFivesGuys();
	vasya.whoAmI();
	vasya.print_full();
}