#include "Dog.hpp"

Dog::Dog():Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete this->_brain;
}

Dog::Dog(Dog const & src):_brain(NULL)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = src;
}

Dog&	Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
	{
		std::cout << "Dog assignment operator called." << std::endl;
		this->_type = rhs.getType();
		delete this->_brain;
		this->_brain = new Brain(rhs.get_brain());
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Dog says woff woff" << std::endl;
}

Brain&	Dog::get_brain() const
{
	return *(this->_brain);
}
