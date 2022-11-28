#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(std::string type);
		virtual ~Cure();

		Cure*	clone() const;
		void	use(ICharacter& target);

	protected:
		Cure(Cure const& src);
		Cure&	operator=(Cure const& rhs);
}
#endif
