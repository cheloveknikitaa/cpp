#include "FragTrap.hpp"

int main()
{
	FragTrap vasya("Vasya");
	FragTrap lesha("Lesha");

	vasya.attack("Lesha");
	lesha.takeDamage(vasya.getAd());
	vasya.beRepaired(10);
	lesha.attack("");
	vasya.highFivesGuys();
	lesha.highFivesGuys();
}