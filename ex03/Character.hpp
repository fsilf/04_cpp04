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

		virtual 	std::string const & getName() const = 0;
		virtual 	void equip(AMateria* m) = 0;
		virtual 	void unequip(ind idx) = 0;
		virtual 	void use(int idx, ICharacter& target) = 0;

	private:
		std::string	_name;
		Materia		_inventory[4];
};

#endif

