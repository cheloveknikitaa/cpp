#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called " << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog constructor called " << type << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called " << std::endl;
}

Dog::Dog(const Dog &raw)
{
	*this = raw;
}

Dog &Dog::operator=(Dog const &raw)
{
	Animal::operator=(raw);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "woof oof" << std::endl;
}
