#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
private:

public:
	WrongDog();
	WrongDog(std::string	type);
	WrongDog(const WrongDog &raw);
	WrongDog &operator=(const WrongDog &raw);
	virtual	~WrongDog();
	void	makeSound() const;
};

#endif
