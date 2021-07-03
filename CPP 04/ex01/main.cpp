/*
* Created: 2021/03/30
*/

#include "AWeapon.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int		main(void)
{
	{
	std::cout << "#===============|HISTORY_1|===============\n";
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);	
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	delete me;
	delete pr;
	delete pf;
	std::cout << "#==============|===========|==============\n\n"; 
	}

	{
	std::cout << "#===============|HISTORY_2|===============\n";
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	Character i("I");
	std::cout << i << "What can I do?";
	std::cout << i;
	Enemy* s = new SuperMutant();

	i.equip(pr);
	i.equip(pr);
	i.attack(s);
	std::cout << i;
	i.attack(s);
	std::cout << i;
	i.attack(s);
	std::cout << i;
	i.attack(s);
	std::cout << i;
	i.attack(s);
	std::cout << i;
	i.attack(s);
	std::cout << i;
	i.attack(s);
	std::cout << i;
	i.attack(s);
	std::cout << i;
	i.attack(s);
	std::cout << i;
	std::cout << i;
	i.equip(pf);
	std::cout << i;
	i.equip(pf);
	std::cout << i;

	delete pr;
	delete pf;
	std::cout << "#==============|===========|==============\n"; 
	}
	return 0;
}