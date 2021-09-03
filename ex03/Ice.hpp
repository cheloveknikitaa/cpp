#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
	std::string	_type;
public:
	Ice();
	Ice(const Ice &raw);
	Ice &operator=(Ice const &raw);
	~Ice();
	AMateria* clone() const;
};
