#ifndef CAT_HPP
# define CAT_HPP
# include <string>
# include <iostream>
# include <ostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(std::string type);
		Cat(Cat const & src);
		~Cat();

		Cat&			operator=(Cat const & rhs);
		void			makeSound() const;			
		Brain&			get_brain() const;

	private:
		Brain*	_brain;
};

//std::ostream&	operator<<(std::ostream& o, Cat const & rhs);
#endif
