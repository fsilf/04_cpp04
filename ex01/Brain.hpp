#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
	public:
		Brain();
		Brain(std::string type);
		Brain(Brain const & src);
		~Brain();

		Brain&			operator=(Brain const & rhs);
		std::string		ideas[100];

		void			set_idea(unsigned int num_idea, std::string idea);
		std::string		get_idea(unsigned int num_idea) const;
};

#endif
