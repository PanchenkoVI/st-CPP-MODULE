/*
* Created: 2021/03/26
*/

#include "Pony.hpp"

void	ponyOnTheHeap (void)
{
	Pony *romeo = new Pony;

	std::cout << "Befor |" << std::endl << "<----->" << std::endl;
	romeo->ft_output();
	std::cout << "<----->" << std::endl << "After |" << std::endl << "<----->" << std::endl;
	romeo->getName("Romeo");
	romeo->getAge("1");	
	romeo->getColor("Black");
	romeo->getGrowth("Little");
	romeo->getCharacter("Mad");
	romeo->ft_output();

	delete romeo;
	return ;
}

void	ponyOnTheStack (void)
{
	Pony juliet;

	std::cout << "Befor |" << std::endl << "<----->" << std::endl;
	juliet.ft_output();
	std::cout << "<----->" << std::endl << "After |" << std::endl << "<----->" << std::endl;
	juliet.getName("Juliet");
	juliet.getAge("3");
	juliet.getColor("White");
	juliet.getGrowth("Big");
	juliet.getCharacter("Kind");
	juliet.ft_output();

	return ;
}

int main(void)
{
	std::cout << "<----------<|__SUMMARY__|>----------->" << std::endl;
	std::cout << "<-----------|ON_THE_HEAP|------------>" << std::endl;
	ponyOnTheHeap();
	std::cout << "<------------------------------------>" << std::endl;
	std::cout << "<-----------|ON_THE_STACK|----------->" << std::endl;
	ponyOnTheStack();
	std::cout << "<------------------------------------>" << std::endl;

	return (0);
}