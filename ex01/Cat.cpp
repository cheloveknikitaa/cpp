#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called " << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat constructor called " << type << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor called " << std::endl;
	delete this->_brain;
}

Cat::Cat(const Cat &raw)
{
	std::cout << "Cat COPY constructor called " << std::endl;
	*this = raw;
}

Cat &Cat::operator=(const Cat &raw)
{
	if (this == &raw)
		return (*this);
	Animal::operator=(raw);
	delete this->_brain;
	if (raw._brain)
	{
		this->_brain = new Brain();
		this->_brain = raw._brain;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}
