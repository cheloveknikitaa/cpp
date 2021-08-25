#include "Zombie.hpp"


Zombie::Zombie(std::string name)
{
	_name = name;
	announce();
	return ;
}

Zombie::~Zombie()
{
	std::cout << _name << " Destroy" << std::endl;
	return ;
}

void	Zombie::announce()
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
