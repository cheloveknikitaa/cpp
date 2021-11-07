#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request", 72, 45) , _Target(target)
{
	std::cout << *this << " with target " << this->getTarget() << " created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &raw) : Form(raw), _Target(raw._Target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

const std::string	&RobotomyRequestForm::getTarget() const { return (this->_Target); }

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->Form::execute(executor);
	std::cout << "*Makes some drilling noises*, and " << this->getTarget();
	int num = std::rand();
	if ((num % 2) == 0)
		std::cout << " robotomized successfully" << std::endl;
	else
		std::cout << " robotomized unsuccessfully" << std::endl;
}
