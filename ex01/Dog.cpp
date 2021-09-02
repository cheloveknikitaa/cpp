#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called " << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog constructor called " << type << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor called " << std::endl;
	delete this->_brain;
}

Dog::Dog(const Dog &raw)
{
	std::cout << "Dog COPY constructor called " << std::endl;
	*this = raw;
}

Dog &Dog::operator=(const Dog &raw)
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

void	Dog::makeSound() const
{
	std::cout << "woof oof" << std::endl;
}
