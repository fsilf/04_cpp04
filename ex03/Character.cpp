#include "Character.hpp"

Character::Character():ICharacter(), _name("unnamed"), _inventory{}
{
	std::cout << "Character default constructor called." << std::endl;
}

Character::Character(std::string name):ICharacter(), _name(name)
{
	std::cout << "Character string constructor called." << std::endl;
}

Character::~Character()
{
	std::cout << "Character destructor called." << std::endl;
	unsigned int i = 0;
	while(this->_inventory[i] != NULL)
	{
		delete this->_inventory[i];
		std::cout << "deleting _inventory[" << i << "]" << std::endl;
		i++;
	}
}

Character::Character(const Character& src)
{
	*this = src;
	std::cout << "Character copy constructor called." << std::endl;
}

Character& Character::operator=(const Character& rhs)
{
	if (*this == rhs)
		return *this;
	this->_name = rhs.getName();
	for(unsigned int i=0; i<4; i++)
	{
		this->_inventory[i] = rhs._inventory[i].clone();
	}
	return *this;
}

const std::string& Character::getName() const
{
	return this->_name;
}

