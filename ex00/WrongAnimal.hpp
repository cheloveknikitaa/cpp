#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
private:
	std::string	_type;
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &raw);
	WrongAnimal &operator=(WrongAnimal const &raw);
	virtual	~WrongAnimal();
	std::string	getType() const;
	void	makeSound() const;
};

#endif