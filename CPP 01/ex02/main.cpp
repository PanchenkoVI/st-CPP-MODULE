/*
* Created: 2021/03/26
*/

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void)
{
	Zombie			*z;
	ZombieEvent		zee;

	std::cout << "<------------------------------->" << std::endl;
	std::cout << "<--------------------->" << std::endl;
	z = new Zombie;
	z->announce();
	delete z;

	std::cout << "<------------------------------->" << std::endl;
	std::cout << "<--------------------->" << std::endl;
	z = zee.newZombie("Alla");
	z->announce();
	delete z;

	std::cout << "<------------------------------->" << std::endl;
	std::cout << "<--------------------->" << std::endl;
	zee.setZombieType("Tehnc");
	z = zee.newZombie("Stas");
	z->announce();
	delete z;

	std::cout << "<------------------------------->" << std::endl;
	std::cout << "<--------------------->" << std::endl;
	z = zee.newZombie("Alla");
	z->announce();
	delete z;

	std::cout << "<------------------------------->" << std::endl;
	std::cout << "     <--------Random------->" << std::endl;
	zee.randomChump();
	zee.randomChump();
	zee.randomChump();
	zee.randomChump();
	zee.randomChump();
	zee.randomChump();
	std::cout << "<------------------------------->" << std::endl;

	return (0);
}