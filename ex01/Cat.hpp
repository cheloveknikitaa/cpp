#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain	*_brain;
public:
	Cat();
	Cat(std::string	type);
	Cat(const Cat &raw);
	Cat &operator=(const Cat &raw);
	virtual	~Cat();
	void	makeSound() const;
};

#endif
