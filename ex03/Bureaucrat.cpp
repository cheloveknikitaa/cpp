#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _Name(name) , _Grade(grade)
{
	if (this->_Grade > 150)
		throw GradeTooLowException();
	if (this->_Grade < 1)
		throw GradeTooHighException();
	std::cout << *this << " created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &raw) : _Name(raw.getName()) { *this = raw; }

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &raw)
{
	this->_Grade = raw.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat() { std::cout << "\x1B[31m" << *this << " Destructor called\x1B[0m" << std::endl; }

const std::string &Bureaucrat::getName() const { return (this->_Name); }
int	Bureaucrat::getGrade() const { return (this->_Grade); }

void Bureaucrat::IncrementGrade() { (this->_Grade - 1 < 1) ? throw GradeTooHighException() : this->_Grade--; }
void Bureaucrat::DecrementGrade() { (this->_Grade + 1 > 150) ? throw GradeTooLowException() : this->_Grade++; }

void	Bureaucrat::signForm(Form &blank) const
{
	if (this->getGrade() > blank.getGradeToSignIt())
		std::cout << this->getName() << " cannot sign " << blank.getName() << " because Grade to low" << std::endl;
	else if (blank.getIndicatingSigned())
		std::cout << this->getName() << " cannot sign " << blank.getName() << " because Form already signed" << std::endl;
	else
		blank.beSigned(*this);
}

void	Bureaucrat::executeForm(Form &blank) const
{
	if (this->getGrade() > blank.getGradeToExecuteIt())
		std::cout << this->getName() << " cannot execute " << blank.getName() << " because Grade to low" << std::endl;
	else if (blank.getIndicatingSigned() == false)
		std::cout << this->getName() << " cannot execute " << blank.getName() << " because Form unsigned" << std::endl;
	else
	{
		std::cout << this->getName() << " executes " << blank.getName() << std::endl;
		blank.execute(*this);
	}
}


Bureaucrat::GradeTooLowException::GradeTooLowException() { }
const char *Bureaucrat::GradeTooLowException::what() const throw() { return ("Grade Too Low Exception"); }
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() { }

Bureaucrat::GradeTooHighException::GradeTooHighException() { }
const char *Bureaucrat::GradeTooHighException::what() const throw() { return ("Grade Too High Exception"); }
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() { }

std::ostream &operator<<(std::ostream &out, const Bureaucrat &person)
{
	out << person.getName() << ", bureaucrat grade " << person.getGrade();
	return (out);
}
