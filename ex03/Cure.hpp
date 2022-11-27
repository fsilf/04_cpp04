#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(std::string type);
		Cure(Cure const& src);
		virtual ~Cure();

		Cure&	operator=(Cure const& rhs);

		AMateria*	clone() const;
		void		use(ICharacter& target);
}
#endif
