#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

int main()
{
	std::cout << "--------Minimal main--------------\n";
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("fire");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	me->unequip(1);

	delete me;

	std::cout << "-------Character copy demo------" << std::endl;
	Character *two = new Character("two");
	tmp = src->createMateria("ice");
	two->equip(tmp);
	tmp = src->createMateria("cure");
	two->equip(tmp);
	tmp = src->createMateria("ice");
	two->equip(tmp);
	tmp = src->createMateria("cure");
	two->equip(tmp);
	tmp = src->createMateria("cure");
	two->equip(tmp);

	Character* the_other = new Character(*two);
	the_other->setName("the_other");

	two->list_inventory();
	the_other->list_inventory();

	two->unequip(2);

	the_other->unequip(0);
	the_other->unequip(3);
	tmp = src->createMateria("cure");
	the_other->equip(tmp);
	
	two->list_inventory();
	the_other->list_inventory();

	two->use(1, *bob);
	two->use(1, *the_other);
	the_other->use(0, *the_other);
	the_other->use(2, *the_other);
	the_other->use(3, *the_other);

	std::cout << "----------Deletes--------------\n";
	delete bob;
	delete two;
	delete the_other;
	delete src;

	return 0;
}
