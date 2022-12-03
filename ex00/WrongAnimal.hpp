#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <ostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const & src);
		virtual ~WrongAnimal();

		WrongAnimal&			operator=(WrongAnimal const & rhs);
		std::string		getType() const;
		void			makeSound() const;			

	protected:
		std::string		_type;
};

std::ostream&	operator<<(std::ostream& o, WrongAnimal const & rhs);
#endif
