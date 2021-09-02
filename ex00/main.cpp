#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	std::cout << "===========================================================================================" << std::endl;
	const WrongAnimal* Wrong_meta = new WrongAnimal();
	const WrongAnimal* Wrong_j = new WrongDog();
	const WrongAnimal* Wrong_i = new WrongCat();
	std::cout << Wrong_j->getType() << " " << std::endl;
	std::cout << Wrong_i->getType() << " " << std::endl;
	Wrong_i->makeSound(); //will output the cat sound!
	Wrong_j->makeSound();
	Wrong_meta->makeSound();

	delete meta;
	delete i;
	delete j;
}