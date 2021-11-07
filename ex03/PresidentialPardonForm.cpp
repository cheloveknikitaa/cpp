#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon", 25, 5) , _Target(target)
{
	// std::cout << *this << " with target " << this->getTarget() << " created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &raw) : Form(raw), _Target(raw._Target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

const std::string	&PresidentialPardonForm::getTarget() const { return (this->_Target); }

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->Form::execute(executor);
	std::cout << "Tells us " << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
