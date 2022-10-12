#include <iostream>
#include <ostream>
#include <string>
#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
	*this = src;
	std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const & rhs)
{
	this->_type = rhs.getType();
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat says meoww meoww" << std::endl;
}

std::ostream&	operator<<(std::ostream& o, WrongCat const & rhs)
{
	o << "WrongCat with type " << rhs.getType() << std::endl; 
	return o;
}
