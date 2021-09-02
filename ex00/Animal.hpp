#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
private:
	std::string	_type;
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &raw);
	Animal &operator=(const Animal &raw);
	virtual	~Animal();
	std::string	getType() const;
	virtual void	makeSound() const;
};

#endif