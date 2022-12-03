#include "MateriaSource.hpp"

MateriaSource::MateriaSource():IMateriaSource(), sources()
{
	std::cout << "MateriaSource default constructor called." << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource default destructor called." << std::endl;
	for (unsigned int i=0; i<4; i++)
	{
		if (this->sources[i] != NULL)
		{
			delete  this->sources[i];
			std::cout << "deleting sources[" << i << "]" << std::endl;
		}
	}	
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	std::cout << "MateriaSource copy constructor called." << std::endl;
	*this = src;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& rhs)
{
	if (this != &rhs)
	{
		for(unsigned int i=0; i<4; i++)
		{
			if (rhs.sources[i] != NULL)
				this->sources[i] = rhs.sources[i]->clone();
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	unsigned int i=0;
	if (materia == NULL)
		return;
	while(i<4 && this->sources[i] != NULL)
		i++;
	if (i < 4)
	{
		this->sources[i] = materia;
		return;
	}
	std::cout << "MateriaSource is full, cannot learn any more materias.\n";
	delete materia;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for(unsigned int i=0; i<4; i++)
	{
		if (this->sources[i] != NULL && type == this->sources[i]->getType())
		{
			return this->sources[i];
		}
	}
	std::cout << "No MateriaSource available for type " << type << std::endl;
	return NULL;
}
