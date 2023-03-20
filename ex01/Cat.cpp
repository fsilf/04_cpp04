#include "Cat.hpp"

Cat::Cat():Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	delete this->_brain;
}

Cat::Cat(Cat const & src):_brain(NULL)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = src;
}

Cat&	Cat::operator=(Cat const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		delete this->_brain;
		this->_brain = new Brain(rhs.get_brain());
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Cat says meoww meoww" << std::endl;
}

Brain&	Cat::get_brain() const
{
	return *(this->_brain);
}
