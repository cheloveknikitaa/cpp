#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		this->_type[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &raw)
{
	*this = raw;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &raw)
{
	if (this == &raw)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		this->_type[i] = raw._type[i];
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* raw)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_type[i] == NULL)
		{
			this->_type[i] = raw->clone();
			break ;
		}
	}
	delete	raw;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_type[i] != NULL && this->_type[i]->getType() == type)
			return (this->_type[i]->clone());
	}
	return (NULL);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_type[i] != NULL)
			delete this->_type[i];
	}
}
