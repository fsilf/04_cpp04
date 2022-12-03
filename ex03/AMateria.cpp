#include "AMateria.hpp"

AMateria::AMateria():_type("materia")
{
	std::cout << "AMateria default constructor called with type: "
		<< this->_type << std::endl;
}

AMateria::AMateria(const std::string& type):_type(type)
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

void	AMateria::use(ICharacter& target)
{
	if (this->_type == "ice")
	{
		std::cout << "* shoots an ice bolt at " << target.getName() 
			<< " *" << std::endl;
	}
	else if (this->_type == "cure")
	{
		std::cout << "* heals " << target.getName() 
			<< "'s wounds *" << std::endl;
	}
	else
	{
		std::cout << "AMateria::use: No use for materia of type "
			<< this->_type << std::endl;
	}
}
