/*
* Created: 2021/03/30
*/

#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"
# include "Deon.hpp"

int		main(void)
{
	std::cout << "\t#---------------------------->\n";
	std::cout << "\t#------------TEST_1---------->\n\n";	
	{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	}
	std::cout << "\t#---------------------------->\n";
	std::cout << "\t#------------TEST_2---------->\n\n";
	{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Deon jaly("Jammy");

	Peon test1_3(joe);
	Sorcerer test1_1(robert);
	Victim test1_2(jim);
	Deon test1_4(jaly);

	std::cout << test1_1 << test1_2 << test1_3 << test1_4;
	test1_1.polymorph(test1_2);
	test1_1.polymorph(test1_3);
	test1_1.polymorph(test1_4);

	std::cout << "\t#--------------------->\n";
	std::cout << "\t#------THE_END-------->\n"; 
	}
	return 0;
}