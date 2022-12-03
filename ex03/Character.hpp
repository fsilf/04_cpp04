#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
		Character();
		Character(std::string name);
		Character(Character const& src);
		virtual ~Character();

		Character& 	operator=(Character const& rhs);

		std::string const & getName() const;
		void setName(const std::string name);
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void list_inventory() const;

		AMateria*	inventory[4];
	private:
		std::string	_name;
};

#endif

