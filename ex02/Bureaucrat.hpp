#pragma once

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	_Name;
	int					_Grade;
	Bureaucrat();
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &raw);
	Bureaucrat &operator=(Bureaucrat const &raw);
	~Bureaucrat();

	const std::string	&getName() const;
	int					getGrade() const;

	void IncrementGrade();
	void DecrementGrade();

	void	signForm(Form &blank) const;
	void	executeForm(Form &blank) const;

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException();
		const char *what() const throw();
		virtual ~GradeTooLowException() throw();
	};
	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
		const char *what() const throw();
		virtual ~GradeTooHighException() throw();
	};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &person);
