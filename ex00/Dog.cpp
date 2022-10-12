#include <iostream>
#include <ostream>
#include <string>
#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog(Dog const & src)
{
	*this = src;
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog&	Dog::operator=(Dog const & rhs)
{
	this->_type = rhs.getType();
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Dog says woff woff" << std::endl;
}

std::ostream&	operator<<(std::ostream& o, Dog const & rhs)
{
	o << "Dog with type " << rhs.getType() << std::endl; 
	return o;
}
