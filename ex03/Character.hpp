#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <string>
# include <iostream>
# include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
		Character();
		Character(std:string name);
		Character(Character const& src);
		virtual ~Character();

		Character& 	operator=(Character const& rhs);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(ind idx);
		void use(int idx, ICharacter& target) = 0;

	private:
		std::string	_name;
		Materia*	_inventory[4];
};

#endif

