#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) , _grade(grade)
{
	if (this->_grade > 150)
		throw GradeTooLowException();
	if (this->_grade < 1)
		throw GradeTooHighException();
	std::cout << *this << " created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &raw) : _name(raw.getName()) { *this = raw; }

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &raw)
{
	this->_grade = raw.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat() { std::cout << "\x1B[31m" << *this << " Destructor called\x1B[0m" << std::endl; }

const std::string &Bureaucrat::getName() const { return (this->_name); }
int	Bureaucrat::getGrade() const { return (this->_grade); }

void Bureaucrat::IncrementGrade() { (this->_grade - 1 < 1) ? throw GradeTooHighException() : this->_grade--; }
void Bureaucrat::DecrementGrade() { (this->_grade + 1 > 150) ? throw GradeTooLowException() : this->_grade++; }

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
