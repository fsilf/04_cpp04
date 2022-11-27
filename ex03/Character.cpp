#include "Character.hpp"

Character::Character():ICharacter(), _name("unnamed")
{
	std::cout << "Character default constructor called." << std::endl;
}

Character::Character(std::string name):ICharacter(), _name(name)
{
	std::cout << "Character string constructor called." << std::endl;
}


