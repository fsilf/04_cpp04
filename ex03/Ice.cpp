#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
	std::cout << "Ice default constructor called with type: "
		<< this->_type << std::endl;
}

Ice::Ice(std::string& type):AMateria(type)
{
	std::cout << "Ice string constructor called with type: "
		<< this->_type << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice virtual destructor called." << std::endl;
}

Ice* Ice::clone() const
{
	return new Ice(*this);
}

Ice::Ice(const Ice& src)
{
	*this = src;
	std::cout << "Ice copy constructor called." << std::endl;
}

Ice&	Ice::operator=(const Ice& rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		std::cout << "Ice assignment operator called with type: " << rhs.getType()
			<< std::endl;
	}
	return *this;
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()
			<< " *" << std::endl;
}
