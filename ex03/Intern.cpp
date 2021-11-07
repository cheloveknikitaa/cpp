#include "Intern.hpp"

Intern::Intern()
{
}

Form	*Intern::makeForm(std::string type, std::string target)
{
	std::string dict[4] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form *out;
	int i = 0;
	while (i < 3 && dict[i] != type)
		i++;
	switch (i)
	{
	case 0 :
		out = new ShrubberyCreationForm(target);
		break;
	case 1 :
		out = new RobotomyRequestForm(target);
		break;
	case 2 :
		out = new PresidentialPardonForm(target);
		break;
	
	default:
		throw FormNotExistException();
		break;
	}
	std::cout << "Intern creates " << *out << std::endl;
	return (out);
}

Intern::FormNotExistException::FormNotExistException() { }
const char *Intern::FormNotExistException::what() const throw() { return ("Can`t create Form, Form not exist"); }
Intern::FormNotExistException::~FormNotExistException() throw() { }

Intern::~Intern()
{
}
