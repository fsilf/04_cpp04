#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* jdog = new Dog();
	const Animal* icat = new Cat();
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wcat = new WrongCat();
	WrongCat wcatobj;

	std::cout << "--------class prints-------------" << std::endl;
	std::cout << *meta;
	std::cout << *jdog;
	std::cout << *icat;
	std::cout << *wmeta;
	std::cout << *wcat;
	std::cout << wcatobj;

	std::cout << "--------getType prints-------------" << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << jdog->getType() << " " << std::endl;
	std::cout << icat->getType() << " " << std::endl;
	std::cout << wmeta->getType() << " " << std::endl;
	std::cout << wcat->getType() << " " << std::endl;
	std::cout << wcatobj.getType() << " " << std::endl;
	
	std::cout << "--------make sounds prints---------" << std::endl;
	meta->makeSound(); // animal sound
	jdog->makeSound(); // dog sound
	icat->makeSound(); // cat sound
	wmeta->makeSound(); // wrong animal sound
	wcat->makeSound(); // wrong animal sound
	wcatobj.makeSound(); // wrong cat sound

	std::cout << "--------destructors-------------" << std::endl;
	delete meta;
	delete jdog;
	delete icat;
	delete wmeta;
	delete wcat;
	return (0);
}
