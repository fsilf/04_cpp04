#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(std::string type);
		Dog(Dog const & src);
		virtual ~Dog();

		Dog&			operator=(Dog const & rhs);
		virtual void	makeSound() const;
		Brain&			get_brain() const;

	private:
		Brain*	_brain;
};

#endif
