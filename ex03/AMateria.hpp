#ifndef MATERIA_HPP
#define MATERIA_HPP
# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string		_type;

	public:
		AMateria();
		AMateria(const std::string& type);
		virtual ~AMateria();

		virtual AMateria*	clone() const = 0;
		std::string const&	getType() const;
		virtual void		use(ICharacter& target);

	protected:
		AMateria(const AMateria& src);
		AMateria&	operator=(const AMateria& rhs);

};
#endif
