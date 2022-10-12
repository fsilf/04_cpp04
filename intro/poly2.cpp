#include <string>
#include <iostream>

class Character
{
	public:
		virtual void sayHello(std::string const & target);
};

class Warrior: public Character
{
	public:
		virtual void	sayHello(std::string const & target);
};

// With virtual the resolution of the function will be dynamic, at the time of the call (not during compilation) => dynamic function == virtual member function == method 

class Cat
{
	//
};

void	Character::sayHello(std::string const & target)
{
	std::cout << "Hello " << target << " !" << std::endl;
}

void	Warrior::sayHello(std::string const & target)
{
	std::cout << "F*** off " << target << ", I don't like you!" << std::endl;
}

int main()
{
	Warrior*	a = new Warrior();
	// OK, a Warrior is a Character
	Character*	b = new Warrior();

	//Not ok, a Character is NOT a Warrior always
	//Warrior*	c = new Character();
	
	//Not ok either
	//Character*	d = new Cat();

	a->sayHello("students");
	b->sayHello("students");	// I said it is a Character...
	return(0);
}
