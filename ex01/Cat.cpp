#include <iostream>
#include <ostream>
#include <string>
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat():Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	delete this->_brain;
}

Cat::Cat(Cat const & src)
{
	*this = src;
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat&	Cat::operator=(Cat const & rhs)
{
	this->_type = rhs.getType();
	this->_brain = new Brain(rhs.get_brain());
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Cat says meoww meoww" << std::endl;
}

Brain&	Cat::get_brain() const
{
	return *(this->_brain);
}
/*
std::ostream&	operator<<(std::ostream& o, Cat const & rhs)
{
	o << "Cat with type " << rhs.getType() << std::endl; 
	return o;
}
*/
