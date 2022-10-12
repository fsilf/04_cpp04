#ifndef DOG_HPP
# define DOG_HPP
# include <string>
# include <iostream>
# include <ostream>
# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(std::string type);
		Dog(Dog const & src);
		~Dog();

		Dog&			operator=(Dog const & rhs);
		virtual void	makeSound() const;			
};

std::ostream&	operator<<(std::ostream& o, Dog const & rhs);
#endif
