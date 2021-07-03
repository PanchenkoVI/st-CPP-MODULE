/*
* Created: 2021/03/30
*/

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() {

	this->dd = 21;	
	this->_name = "Plasma Rifle";
	this->aap = 5;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & str) {

	this->dd = str.dd;
	this->_name = str._name;
	this->aap = str.aap;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const & str) {

	this->aap = str.aap;
	this->_name = str._name;
	this->dd = str.dd;
	return *this;
}

PlasmaRifle::~PlasmaRifle() {
}

void PlasmaRifle::attack() const {

	std::cout << RED << "* piouuu piouuu piouu *\n" << END;
}