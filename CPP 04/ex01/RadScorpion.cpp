/*
* Created: 2021/03/30
*/

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(RadScorpion const & str) {

	this->_hp = str._hp;
	this->_type = str._type;
}

RadScorpion::RadScorpion() {

	this->_hp = 80;
	this->_type = "RadScorpion";
	std::cout << "* click click click *";
	std::cout << std::endl;
}

RadScorpion & RadScorpion::operator= (RadScorpion const & str) {

	this->_hp = str._hp;
	this->_type = str._type;
	return *this;
}

RadScorpion::~RadScorpion() {

	std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int i) {

	Enemy::takeDamage(i);
}