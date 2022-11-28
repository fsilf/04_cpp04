#include "Ice.hpp"

Ice::Ice():_type("ice")
{
	std::cout << "Ice default constructor called with type: "
		<< this->_type << std::endl;
}

Ice::Ice(std::string& type):_type(type)
{
	std::cout << "Ice string constructor called with type: "
		<< this->_type << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice virtual destructor called." << std::endl;
}

Ice* clone() const
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
	if (*this == rhs)
		return *this;
	this->_type = rhs.getType();
	std::cout << "Ice assignment operator called with type: " << rhs.getType()
		<< std::endl;
	return *this;
}
