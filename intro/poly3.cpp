#include <string>
#include <iostream>

// Abstract class, cannot be instanciated (with pure functions)
class ACharacter
{
	public:
		virtual void	attack(std::string const & target) = 0; // pure function
		void			sayHello(std::string const & target);

		std::string		name; //will be inherited by child classes
};

class Warrior: public ACharacter
{
	public:
		virtual void	attack(std::string const & target);
};

// With virtual the resolution of the function will be dynamic, at the time of the call (not during compilation) => dynamic function == virtual member function == method 

void	ACharacter::sayHello(std::string const & target)
{
	std::cout << "Hello " << target << " !" << std::endl;
}

void	Warrior::attack(std::string const & target)
{
	std::cout << "*attacks " << target << " with a sword*" << std::endl;
}

// Interfaces have no attributes and all its member functions are pure
// Interfaces are just a way to define behaviors, the concrete function will be
// defined in the child class
class ICoffeeMaker
{
	public:
		virtual void		fillWaterTank(IWaterSource * src) = 0;
		virtual ICoffee*	makeCoffee(std::string const & type) = 0;
};

int main()
{
	ACharacter*		a = new Warrior();

	// Does NOT work, ACharacter is abstract
	//ACharacter*	b = new ACharacter()

	a->sayHello("students");
	a->attack("roger");
	return(0);
}
