#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_type[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &raw);
	MateriaSource &operator=(MateriaSource const &raw);
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
	~MateriaSource();
};
