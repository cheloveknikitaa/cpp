#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal()
{
	std::cout << "WrongDog constructor called " << std::endl;
}

WrongDog::WrongDog(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongDog constructor called " << type << std::endl;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog destructor called " << std::endl;
}

WrongDog::WrongDog(const WrongDog &raw)
{
	*this = raw;
}

WrongDog &WrongDog::operator=(WrongDog const &raw)
{
	WrongAnimal::operator=(raw);
	return (*this);
}

void	WrongDog::makeSound() const
{
	std::cout << "woof oof" << std::endl;
}
