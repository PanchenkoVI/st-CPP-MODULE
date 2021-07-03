/*
* Created: 2021/03/30
*/

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int		main(void)
{
	std::cout << "#===============|HISTORY_1|===============\n";
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	delete vlc;
	std::cout << "#==============|HAPPY_END_1|==============\n\n\n";
	
	std::cout << "#===============|HISTORY_2|===============\n";
	Squad sd;
	sd.push(new TacticalMarine);
	sd.push(new AssaultTerminator);
	int i = 2;

	while (i < 25)
	{
		if ((rand() % 50) > 25)
			sd.push(new TacticalMarine);
		else
			sd.push(new AssaultTerminator);
		i++;
	}
	i = 0;
	while (i < 25)
	{
		int r = (rand() % 60);
		std::cout << i << ": ";
		if (r > 40)
			sd.getUnit(i)->battleCry();
		else if (r > 20)
			sd.getUnit(i)->rangedAttack();
		else
			sd.getUnit(i)->meleeAttack();
		i++;
	}
	std::cout << "\t\t<--------->\n";
	std::cout << "\t\t|" << sd.getCount() << " --> " << sd.push(0) << "|\n";
	std::cout << "\t\t|" << sd.getCount() << " --> " << sd.push(sd.getUnit(25 - 1)) << "|\n";
	std::cout << "\t\t|" << sd.getCount() << " --> " << sd.push(sd.getUnit(25)) << "|\n";
	std::cout << "\t\t|" << sd.getCount() << " --> " << sd.push(sd.getUnit(25 + 1)) << "|\n";
	std::cout << "\t\t|" << sd.getUnit(-1) << "   " << sd.getUnit(10000) << "|\n";
	std::cout << "\t\t<--------->\n";
	std::cout << "#==============|HAPPY_END_2|==============\n" << "\t    Goodbye My friends!\n";

	return (0);
}