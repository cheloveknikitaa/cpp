#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat	*person = NULL;
	Bureaucrat	*person1 = NULL;
	Form		*blank = NULL;
	Form		*blank1 = NULL;

	std::cout << "TEST1 make 2 good Form and 1 bad" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	try
	{
		person = new Bureaucrat("Low Rang", 150);
		person1 = new Bureaucrat("High Rang", 1);
		blank = new Form("28B", 1 , 50);
		blank1 = new Form("28c", 150 , 50);
		std::cout << "Call copy constructor" << std::endl;
		Form	goodCopy(*blank);
		Form	bad("Bad blank", 0, 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "TEST2 2 good Bureaucrat signed form" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	try
	{
		blank->beSigned(*person1);
		person->signForm(*blank1);
	}
	catch (std::exception & e)
	{
		std::cout << "newer print it" << std::endl;
		std::cout << e.what() << std::endl;
	}
	std::cout << "TEST3 2 good Bureaucrat signed form, but fail" << std::endl;
	std::cout << "---------------------------------------------------------" << std::endl;
	try
	{
		person->signForm(*blank1);
		blank->beSigned(*person1);
	}
	catch (std::exception & e)
	{
		std::cout << person1->getName() << " " << e.what() << std::endl;
	}
	delete(person);
	delete(person1);
	delete(blank);
	delete(blank1);
	return 0;
}
