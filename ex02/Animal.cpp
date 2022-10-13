#include <iostream>
#include <ostream>
#include <string>
#include "Animal.hpp"

Animal::Animal():_type("Animal")
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(std::string type):_type(type)
{
	std::cout << "Animal string constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal(Animal const & src)
{
	*this = src;
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal&	Animal::operator=(Animal const & rhs)
{
	this->_type = rhs.getType();
	return *this;
}

std::string	Animal::getType() const
{
	return this->_type;
}
