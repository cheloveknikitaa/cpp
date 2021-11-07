#pragma once

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	const std::string	_Target;
	ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &raw);
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &raw);
	virtual ~ShrubberyCreationForm();
	const std::string	&getTarget() const;
	void	execute(Bureaucrat const & executor) const;
};