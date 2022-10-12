#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <ostream>
#include <iostream>
#include <string>

int main()
{
	const Animal* meta = new Animal();
	const Animal* jdog = new Dog();
	const Animal* icat = new Cat();
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wcat = new WrongCat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << jdog->getType() << " " << std::endl;
	std::cout << icat->getType() << " " << std::endl;
	std::cout << wmeta->getType() << " " << std::endl;
	std::cout << wcat->getType() << " " << std::endl;
	
	meta->makeSound(); // animal sound
	jdog->makeSound(); // dog sound
	icat->makeSound(); // cat sound
	wmeta->makeSound(); // wrong animal sound
	wcat->makeSound(); // wrong animal sound

	delete meta;
	delete jdog;
	delete icat;
	delete wmeta;
	delete wcat;
	return (0);
}
