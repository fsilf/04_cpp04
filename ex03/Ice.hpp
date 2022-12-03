#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(std::string& type);
		virtual ~Ice();

		Ice*	clone() const;
		//void	use(ICharacter& target);

	protected:
		Ice(Ice const& src);
		Ice&	operator=(Ice const& rhs);
};
#endif
