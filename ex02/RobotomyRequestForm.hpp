#pragma once

#include "Form.hpp"

#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public Form
{
private:
	const std::string	_Target;
	RobotomyRequestForm();
	RobotomyRequestForm &operator=(RobotomyRequestForm const &raw);
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &raw);
	virtual ~RobotomyRequestForm();
	const std::string	&getTarget() const;
	void	execute(Bureaucrat const & executor) const;
};
