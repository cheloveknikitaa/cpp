#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog();

	std::cout << j->getType() << " " << std::endl;
	std::cout << "==========================================================================================" << std::endl;
	Cat i("vasya");
	Cat testCopy;
	testCopy = i;
	std::cout << i.getType() << " " << std::endl;
	std::cout << &testCopy << " adrs brain = " << testCopy.getIdeas() << std::endl;
	std::cout << &i << " adrs brain = " << i.getIdeas() << std::endl;
	std::cout << "==========================================================================================" << std::endl;
	testCopy.makeSound();
	i.makeSound(); //will output the cat sound!
	j->makeSound();

	delete j;
}