#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include <Brain.hpp>

class Animal : public Brain
{
private:
	std::string	_type;
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &raw);
	Animal &operator=(Animal const &raw);
	virtual	~Animal();
	std::string	getType() const;
	virtual void	makeSound() const = 0;
};

#endif