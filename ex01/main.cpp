#include "ScavTrap.hpp"

int main()
{
	ScavTrap vasya("Vasya");
	ScavTrap lesha("Lesha");
	ScavTrap alesha(lesha);

	vasya.attack("Lesha");
	alesha.takeDamage(vasya.getAd());
	vasya.beRepaired(10);
	alesha.attack("");
	vasya.guardGate();
	alesha.guardGate();
}