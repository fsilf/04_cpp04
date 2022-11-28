#include "AMateria.hpp"

AMateria::AMateria():_type("materia")
{
	std::cout << "AMateria default constructor called with type: "
		<< this->_type << std::endl;
}

AMateria::AMateria(std::string& type):_type(type)
{
	std::cout << "AMateria string constructor called with type: "
		<< this->_type << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria virtual destructor called." << std::endl;
}

const std::string& AMateria::getType() const
{
	return this->_type;
}
