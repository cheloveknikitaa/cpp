#include "Zombie.hpp"


Zombie::Zombie()
{
	return ;
}
void	Zombie::setName(std::string name)
{
	_name = name;
	announce();
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
