#include "Cure.hpp"

Cure::Cure():_type("cure")
{
	std::cout << "Cure default constructor called with type: "
		<< this->_type << std::endl;
}

Cure::Cure(std::string& type):_type(type)
{
	std::cout << "Cure string constructor called with type: "
		<< this->_type << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure virtual destructor called." << std::endl;
}

Cure* clone() const
{
	return new Cure(*this);
}

Cure::Cure(const Cure& src)
{
	*this = src;
	std::cout << "Cure copy constructor called." << std::endl;
}

Cure&	Cure::operator=(const Cure& rhs)
{
	if (*this == rhs)
		return *this;
	this->_type = rhs.getType();
	std::cout << "Cure assignment operator called with type: " << rhs.getType()
		<< std::endl;
	return *this;
}
