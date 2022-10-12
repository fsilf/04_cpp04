#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>
//# include <ostream>

class Brain
{
	public:
		Brain();
		Brain(std::string type);
		Brain(Brain const & src);
		~Brain();

		Brain&			operator=(Brain const & rhs);
		std::string		ideas[100];
};

//std::ostream&	operator<<(std::ostream& o, Brain const & rhs);
#endif
