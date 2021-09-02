#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
private:
	std::string _ideas[100];
public:
	Brain();
	Brain(const Brain &raw);
	Brain &operator=(const Brain &raw);
	~Brain();
	std::string *getIdeas();
};

#endif