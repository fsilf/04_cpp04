#include <iostream>
#include <ostream>
#include <string>
#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

Cat::Cat(Cat const & src)
{
	*this = src;
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat&	Cat::operator=(Cat const & rhs)
{
	this->_type = rhs.getType();
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Cat says meoww meoww" << std::endl;
}

std::ostream&	operator<<(std::ostream& o, Cat const & rhs)
{
	o << "Cat with type " << rhs.getType() << std::endl; 
	return o;
}
