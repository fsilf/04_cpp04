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

void	Brain::set_idea(unsigned int num_idea, std::string idea)
{
	if (num_idea < 100)
		this->ideas[num_idea] = idea;
}

std::string	Brain::get_idea(unsigned int num_idea) const
{
	if (num_idea < 100)
		return this->ideas[num_idea];
	return "Brain overload";
}
