/*
* Created: 2021/03/26
*/

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

Zombie::Zombie(void) {

	std::cout << "Zombie created." << std::endl;
	return ;
}

Zombie::~Zombie(void) {

	std::cout << "Zombie died." << std::endl;
	return ;
}

void	Zombie::getDate(std::string n, std::string t) {

	name = n;
	type = t;
}

void	Zombie::announce(void)
{
	std::cout << "<";
	std::cout << name;
	std::cout << " (";
	std::cout << type;
	std::cout << ") ";
	std::cout << "Braiiiiiiinnnssss...\n";
}