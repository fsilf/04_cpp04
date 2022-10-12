#include <iostream>
#include <ostream>
#include <string>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():_type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type):_type(type)
{
	std::cout << "WrongAnimal string constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	*this = src;
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const & rhs)
{
	this->_type = rhs.getType();
	return *this;
}

std::string	WrongAnimal::getType() const
{
	return this->_type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal says wrrrrrg" << std::endl;
}

std::ostream&	operator<<(std::ostream& o, WrongAnimal const & rhs)
{
	o << "WrongAnimal with type " << rhs.getType() << std::endl; 
	return o;
}
