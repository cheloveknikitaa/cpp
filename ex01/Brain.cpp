#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called " << std::endl;
}

Brain::Brain(const Brain &raw)
{
	std::cout << "Brain copy constructor called " << std::endl;
	*this = raw;
}

Brain &Brain::operator=(const Brain &raw)
{
	int	i = 0;
	while(i < 100)
	{
		this->_ideas[i] = raw._ideas[i];
		i++;
	}
	return (*this);
}

std::string *Brain::getIdeas()
{
	return (_ideas);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called " << std::endl;
}
