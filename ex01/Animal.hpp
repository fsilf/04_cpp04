#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const & src);
		virtual ~Animal();

		Animal&			operator=(Animal const & rhs);
		std::string		getType() const;
		virtual void	makeSound() const;			

	protected:
		std::string		_type;
};

#endif
