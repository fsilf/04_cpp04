#include "Character.hpp"

Character::Character():ICharacter(), inventory(), _name("unnamed")
{
	std::cout << "Character default constructor called." << std::endl;
}

Character::Character(std::string name):ICharacter(), inventory(), _name(name)
{
	std::cout << "Character string constructor called with name " 
		<< this->_name << std::endl;
}

Character::~Character()
{
	std::cout << "Character destructor called for " << this->_name << std::endl;
	std::cout << "Cleaning inventory: \n"; 
	for(unsigned int i=0; i<4; i++)
	{
		if(this->inventory[i] != NULL)
		{
			std::cout << "deleting inventory[" << i << "]: "
				<< this->inventory[i]->getType() << " from character "
				<< this->_name << std::endl;
			this->inventory[i] = NULL;
		}
	}
}

Character::Character(const Character& src)
{
	*this = src;
	std::cout << "Character copy constructor called." << std::endl;
}

Character& Character::operator=(const Character& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		for(unsigned int i=0; i<4; i++)
		{
			this->inventory[i] = rhs.inventory[i];
		}
	}
	return *this;
}

const std::string&	Character::getName() const
{
	return this->_name;
}

void	Character::setName(const std::string name)
{
	this->_name = name;
	std::cout << "Name of character set to: " << this->_name << std::endl;
}

void	Character::equip(AMateria* m)
{
	unsigned int i=0;
	if (m == NULL)
		return;
	while(this->inventory[i] != NULL)
		i++;
	if (i < 4)
	{
		this->inventory[i] = m;
		std::cout << "Adding materia " << m->getType() << " to the inventory of "
			<< this->_name << std::endl;
		return;
	}
	std::cout << "The inventory is full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0 )
	{
		if (this->inventory[idx] != NULL)
		{
			std::cout << "Removing materia " << idx << " with type "
				<< this->inventory[idx]->getType() << " from the inventory of "
				<< this->_name << std::endl;
			this->inventory[idx] = NULL;
		}
		return;
	}
	std::cout << "Not a valid id" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->inventory[idx] != NULL)
		{
			this->inventory[idx]->use(target);
			return;
		}
		else
		{
			std::cerr << "Character " << target.getName() 
				<< " use error: No materia with that idx\n";
			return;
		}
		std::cerr << "Character " << target.getName() 
				<< " use error: invalid idx\n";
	}
}

void	Character::list_inventory() const
{
	std::cout << "---Inventory of " << this->_name << " is: " << std::endl;
	for (unsigned int i=0; i<4; i++)
	{
		if (this->inventory[i] != NULL)
			std::cout << i << " : " << this->inventory[i]->getType() << std::endl;
	}
	std::cout << "--------------\n";
}
