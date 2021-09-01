#include "ScavTrap.hpp"

int main()
{
	ScavTrap vasya("Vasya");
	ScavTrap lesha("Lesha");

	vasya.attack("Lesha");
	lesha.takeDamage(vasya.getAd());
	vasya.beRepaired(10);
	lesha.attack("");
	vasya.guardGate();
	lesha.guardGate();
}