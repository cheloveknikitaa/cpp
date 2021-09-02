#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
private:

public:
	Dog();
	Dog(std::string	type);
	Dog(const Dog &raw);
	Dog &operator=(Dog const &raw);
	virtual	~Dog();
	void	makeSound() const;
};

#endif
