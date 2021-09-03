#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string	_name;
	AMateria *_type[4];
public:
	Character(std::string	name);
	Character(const Character &raw);
	Character &operator=(const Character &raw);
	virtual ~Character();
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};
