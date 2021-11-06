#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_Name;
	const int			_GradeToSignIt;
	const int			_GradeToExecuteIt;
	bool				_IndicatingSigned;
	Form();
	Form &operator=(Form const &raw);
public:
	Form(std::string Name, int GradeToSignIt, int GradeToExecuteIt);
	Form(const Form &raw);
	~Form();

	const std::string	&getName() const;
	int			getGradeToSignIt() const;
	int			getGradeToExecuteIt() const;
	bool				getIndicatingSigned() const;

	void	beSigned(const Bureaucrat &person);

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException();
		const char *what() const throw();
		virtual ~GradeTooLowException() throw();
	};
	class FormAlreadySignedException : public std::exception
	{
	public:
		FormAlreadySignedException();
		const char *what() const throw();
		virtual ~FormAlreadySignedException() throw();
	};
	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
		const char *what() const throw();
		virtual ~GradeTooHighException() throw();
	};
};

std::ostream &operator<<(std::ostream &out, const Form &blank);
