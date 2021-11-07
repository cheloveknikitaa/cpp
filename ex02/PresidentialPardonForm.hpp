#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	const std::string	_Target;
	PresidentialPardonForm();
	PresidentialPardonForm &operator=(PresidentialPardonForm const &raw);
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &raw);
	virtual ~PresidentialPardonForm();
	const std::string	&getTarget() const;
	void	execute(Bureaucrat const & executor) const;
};
