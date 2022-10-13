#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <ostream>
#include <iostream>
#include <string>

int main()
{
	Animal* odie = new Dog();
	Animal* nermal = new Cat();
	Animal* arr[2] = {odie, nermal};

	for (unsigned int i=0; i < 2; i++)
		delete arr[i];

	Dog odie1;
	Dog* odie2;
	
	std::string original_idea = "Woof Woof";
	std::string new_idea = "Meoww Meoww";

	std::cout << odie1.getType() << " " << std::endl;
	
	odie1.makeSound(); // dog sound
	
	odie1.get_brain().set_idea(0, original_idea);
	std::cout << "The first idea in odie1 brain is: " 
		<< odie1.get_brain().get_idea(0) << std::endl;
	
	odie2 = new Dog(odie1);
	std::cout << odie2->getType() << " " << std::endl;
	odie2->makeSound(); // dog sound

	odie1.get_brain().set_idea(0, new_idea);
	std::cout << "The first idea in odie1 brain is: " 
		<< odie1.get_brain().get_idea(0) << std::endl;
	std::cout << "The first idea in odie2 brain is: "
	   	<< odie2->get_brain().get_idea(0)  << std::endl;

	delete odie2;

	//Animal animal;
	return (0);
}
