#ifndef CAT_HPP
# define CAT_HPP
# include <string>
# include <iostream>
# include <ostream>
# include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(std::string type);
		Cat(Cat const & src);
		~Cat();

		Cat&			operator=(Cat const & rhs);
		virtual void	makeSound() const;			
};

std::ostream&	operator<<(std::ostream& o, Cat const & rhs);
#endif
