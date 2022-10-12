#include <iostream>
#include <ostream>
#include <string>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog():Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete this->_brain;
}

Dog::Dog(Dog const & src)
{
	*this = src;
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog&	Dog::operator=(Dog const & rhs)
{
	this->_type = rhs.getType();
	this->_brain = new Brain(rhs.get_brain());
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Dog says woff woff" << std::endl;
}

Brain&	Dog::get_brain() const
{
	return *(this->_brain);
}
/*
std::ostream&	operator<<(std::ostream& o, Dog const & rhs)
{
	o << "Dog with type " << rhs.getType() << std::endl; 
	return o;
}
*/
