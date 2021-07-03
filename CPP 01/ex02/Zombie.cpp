/*
* Created: 2021/03/26
*/

#include "Zombie.hpp"

Zombie::Zombie(void) {

	std::cout << "Zombie created!" << std::endl;
	type = "Orgn";
	name = "Katy";
	return ;
}

Zombie::~Zombie(void) {

	std::cout << "Zombie died!" << std::endl;
	return ;
}

void	Zombie::getDate(std::string n, std::string t) {

	name = n;
	type = t;
}

void	Zombie::announce(void) {

	std::cout << "<";
	std::cout << this->name;
	std::cout << " (";
	std::cout << this->type;
	std::cout << ") ";
	std::cout << "Braiiiiiiinnnssss...\n";
}