#include "Character.hpp"

Character::Character(std::string	name) : _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_type[i] = NULL;
	}
}

Character::Character(const Character &raw)
{
	*this = raw;
}

Character &Character::operator=(Character const &raw)
{
	if (this == &raw)
		return (*this);
	this->_name = raw.getName();
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_type[i] == NULL)
		{
			this->_type[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (this->_type[idx] != NULL)
	{
		delete this->_type[idx];
		this->_type[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	this->_type[idx]->use(target);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_type[i] != NULL)
		{
			delete this->_type[i];
			this->_type[i] = NULL;
		}
	}
}
