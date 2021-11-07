#pragma once

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	Intern &operator=(Intern const &raw);
	Intern(const Intern &raw);
public:
	Intern();
	Form	*makeForm(std::string type, std::string target);
	~Intern();
	class FormNotExistException : public std::exception
	{
	public:
		FormNotExistException();
		const char *what() const throw();
		virtual ~FormNotExistException() throw();
	};
};
