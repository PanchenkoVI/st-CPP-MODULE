/*
* Created: 2021/03/30
*/

#include "PowerFist.hpp"

PowerFist::PowerFist(PowerFist const & str) {

	this->_name = str._name;
	this->dd = str.dd;
	this->aap = str.aap;
}

PowerFist::PowerFist(void) {

	this->_name = "Power Fist";
	this->dd = 50;
	this->aap = 8;
}

PowerFist::~PowerFist() {
}

void PowerFist::attack(void) const {

	std::cout << RED << "* pschhh... SBAM! *\n" << END;
}

PowerFist	&PowerFist::operator= (PowerFist const & str) {

	this->dd = str.dd;
	this->aap = str.aap;
	this->_name = str._name;
	return (*this);
}