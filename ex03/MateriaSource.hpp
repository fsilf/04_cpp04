#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const& src);
		virtual ~MateriaSource();

		MateriaSource&	operator=(MateriaSource const& rhs);

	private:
		Materia*		_sources[4];
}
#endif
