/*
* Created: 2021/03/30
*/

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int		main(void)
{
	std::cout << "#===============|HISTORY_1|===============#\n";
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "#==============|___________|==============#\n\n";
	std::cout << "#===============|HISTORY_2|===============#\n";
	me->use(4, *bob);
	me->use(3, *bob);
	me->use(2, *bob);
	me->use(1, *bob);
	std::cout << std::endl;

	me->unequip(-1);
	me->unequip(2);
	me->unequip(3);

	me->use(3, *bob);
	me->use(2, *bob);
	me->use(1, *bob);
	me->use(0, *bob);
	
	std::cout << "#==============|___________|==============#\n\n";

	delete me;
	delete bob;
	delete src;

	return 0;
}