#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
	std::cout << "Cure default constructor called with type: "
		<< this->_type << std::endl;
}

Cure::Cure(std::string& type):AMateria(type)
{
	std::cout << "Cure string constructor called with type: "
		<< this->_type << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure virtual destructor called." << std::endl;
}

Cure* Cure::clone() const
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
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		std::cout << "Cure assignment operator called with type: " << rhs.getType()
			<< std::endl;
	}
	return *this;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName()
		<< "'s wounds *" << std::endl;
}
