#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat *person = NULL;
	Bureaucrat *person1 = NULL;

	std::cout << "TEST1 make 2 good Bureaucrat and 1 bad" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	try
	{
		person = new Bureaucrat("Low Rang", 150);
		person1 = new Bureaucrat("High Rang", 1);
		Bureaucrat Bad("Bad to high", 0);
		std::cout << "newer print it" << std::endl;
		Bureaucrat Never("never do this", 322);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "TEST2 2 good Bureaucrat increment and decrement" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	try
	{
		std::cout << "Before increment " << *person << std::endl;
		person->IncrementGrade();
		std::cout << "After increment " << *person << std::endl;
		std::cout << "Before decrement " << *person1 << std::endl;
		person1->DecrementGrade();
		std::cout << "After decrement " << *person1 << std::endl;
		person1->IncrementGrade();
		person->DecrementGrade();
		std::cout << "Make grade back " << std::endl << *person << std::endl << *person1 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "newer print it" << std::endl;
		std::cout << e.what() << std::endl;
	}
	std::cout << "TEST3 2 good Bureaucrat increment and decrement, but fail" << std::endl;
	std::cout << "---------------------------------------------------------" << std::endl;
	try
	{
		person1->IncrementGrade();
		std::cout << "newer print it" << std::endl;
		person->DecrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << person1->getName() << " " << e.what() << std::endl;
	}
	std::cout << "TEST4 2 good Bureaucrat increment and decrement, but fail" << std::endl;
	std::cout << "---------------------------------------------------------" << std::endl;
	try
	{
		person->DecrementGrade();
		std::cout << "newer print it" << std::endl;
		person1->IncrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << person->getName() << " " << e.what() << std::endl;
	}
	// person->DecrementGrade();
	delete(person);
	delete(person1);
	return 0;
}
