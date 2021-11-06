#include "Form.hpp"

Form::Form(std::string Name, int GradeToSignIt, int GradeToExecuteIt) : \
	_Name(Name) , _GradeToSignIt(GradeToSignIt), _GradeToExecuteIt(GradeToExecuteIt)
{
	if (this->_GradeToSignIt > 150 || this->_GradeToExecuteIt > 150)
		throw GradeTooLowException();
	if (this->_GradeToSignIt < 1 || this->_GradeToExecuteIt < 1)
		throw GradeTooHighException();
	this->_IndicatingSigned = false;
	std::cout << *this << " created" << std::endl;
}

Form::Form(const Form &raw) : _Name(raw.getName()), _GradeToSignIt(raw.getGradeToSignIt()), \
	_GradeToExecuteIt(raw.getGradeToExecuteIt()) , _IndicatingSigned(raw.getIndicatingSigned()) {}

Form::~Form() { std::cout << "\x1B[31m" << *this << " Destructor called\x1B[0m" << std::endl; }

const std::string	&Form::getName() const { return (this->_Name); }
int			Form::getGradeToSignIt() const { return (this->_GradeToSignIt); }
int			Form::getGradeToExecuteIt() const { return (this->_GradeToExecuteIt); }
bool				Form::getIndicatingSigned() const { return (this->_IndicatingSigned); }

void	Form::beSigned(const Bureaucrat &person)
{
	if (person.getGrade() > this->getGradeToSignIt())
		throw GradeTooLowException();
	else if (this->getIndicatingSigned())
		throw FormAlreadySignedException();
	else
	{
		std::cout << person.getName() <<" signs " << this->getName() << std::endl;
		this->_IndicatingSigned = true;
	}
}

Form::GradeTooLowException::GradeTooLowException() { }
const char *Form::GradeTooLowException::what() const throw() { return ("Grade Too Low Exception"); }
Form::GradeTooLowException::~GradeTooLowException() throw() { }

Form::FormAlreadySignedException::FormAlreadySignedException() { }
const char *Form::FormAlreadySignedException::what() const throw() { return ("Form already signed"); }
Form::FormAlreadySignedException::~FormAlreadySignedException() throw() { }

Form::GradeTooHighException::GradeTooHighException() { }
const char *Form::GradeTooHighException::what() const throw() { return ("Grade Too High Exception"); }
Form::GradeTooHighException::~GradeTooHighException() throw() { }

std::ostream &operator<<(std::ostream &out, const Form &blank)
{
	out << blank.getName() << ", form a grade required to sign it " << blank.getGradeToSignIt() \
	<< " a grade required to execute it " << blank.getGradeToExecuteIt() << " it is signed - " << std::boolalpha << blank.getIndicatingSigned();
	return (out);
}
