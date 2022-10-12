#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <ostream>
#include <iostream>
#include <string>

int main()
{
	const Animal* jdog = new Dog();
	const Animal* icat = new Cat();

	std::cout << jdog->getType() << " " << std::endl;
	std::cout << icat->getType() << " " << std::endl;
	
	jdog->makeSound(); // dog sound
	icat->makeSound(); // cat sound
	

	delete jdog;
	delete icat;
	return (0);
}
