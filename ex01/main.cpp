#include "Zombie.hpp"

int	main()
{
	Zombie	*ZombieArmy;

	ZombieArmy = ZombieHorde(10, "NIKITA");
	delete [] ZombieArmy;
	return (0);
}