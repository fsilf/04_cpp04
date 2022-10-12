#include <iostream>
#include <ostream>
#include <string>
#include "Brain.hpp"

Brain::Brain():ideas()
{
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

Brain::Brain(Brain const & src)
{
	*this = src;
	std::cout << "Brain copy constructor called." << std::endl;
}

Brain&	Brain::operator=(Brain const & rhs)
{
	if (this != &rhs)
	{
		for (unsigned int i=0; i < sizeof(this->ideas)/sizeof(this->ideas[0]); i++)
			this->ideas[i] =  rhs.ideas[i];
	}
	return *this;
}

/*
std::ostream&	operator<<(std::ostream& o, Brain const & rhs)
{
	o << "Brain with type " << rhs.getType() << std::endl; 
	return o;
}
*/
