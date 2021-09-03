#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
	std::string	_type;
public:
	Cure();
	Cure(const Cure &raw);
	Cure &operator=(Cure const &raw);
	~Cure();
	AMateria* clone() const;
	void use(ICharacter& target);
};
