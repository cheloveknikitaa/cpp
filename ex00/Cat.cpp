#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called " << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat constructor called " << type << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called " << std::endl;
}

Cat::Cat(const Cat &raw)
{
	*this = raw;
}

Cat &Cat::operator=(Cat const &raw)
{
	Animal::operator=(raw);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}
