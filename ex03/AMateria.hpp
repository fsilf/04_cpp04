#ifndef MATERIA_HPP
#define MATERIA_HPP
# include <string>
# include <iostream>

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

	protected:
		AMateria(const AMateria& src);
		AMateria&	operator=(const AMateria& rhs);

		//virtual void		use(ICharacter& target);
};
#endif
