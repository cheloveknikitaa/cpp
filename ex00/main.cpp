#include "Zombie.hpp"

int	main()
{
	Zombie	*Zombie, *Zombie2;

	Zombie = newZombie("Nikita");
	randomChump("Roma");
	randomChump("Vasya");

	Zombie2 = newZombie("Ivan");
	delete	Zombie2;
	delete	Zombie;
	return (0);
}