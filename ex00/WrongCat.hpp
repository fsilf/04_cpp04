#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <string>
# include <iostream>
# include <ostream>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(std::string type);
		WrongCat(WrongCat const & src);
		~WrongCat();

		WrongCat&		operator=(WrongCat const & rhs);
		void			makeSound() const;			
};

std::ostream&	operator<<(std::ostream& o, WrongCat const & rhs);
#endif
