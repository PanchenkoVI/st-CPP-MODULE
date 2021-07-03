/*
* Created: 2021/03/30
*/

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(SuperMutant const & str) {
	
	this->_hp = str._hp;
	this->_type = str._type;
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant() {

	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	this->_type = "Super Mutant";
	this->_hp = 170;
}

SuperMutant::~SuperMutant() {

	std::cout << "Aaargh..." << std::endl;
}

SuperMutant & SuperMutant::operator= (SuperMutant const & str) {

	this->_type = str._type;
	this->_hp = str._hp;
	return (*this);
}

void SuperMutant::takeDamage(int i) {
	
	Enemy::takeDamage(i - 3);
}