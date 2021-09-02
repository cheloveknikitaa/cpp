#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

public:
	WrongCat();
	WrongCat(std::string	type);
	WrongCat(const WrongCat &raw);
	WrongCat &operator=(WrongCat const &raw);
	virtual	~WrongCat();
	void	makeSound() const;
};

#endif
