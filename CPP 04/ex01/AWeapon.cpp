/*
* Created: 2021/03/30
*/

#include "AWeapon.hpp"

AWeapon::AWeapon() {
}

AWeapon::AWeapon(std::string const &name, int ap, int d) {

	this->_name = name;
	this->aap = ap;
	this->dd = d;
}

AWeapon::AWeapon(AWeapon const & str) {

	this->aap = str.aap;
	this->_name = str._name;
	this->dd = str.dd;
}

AWeapon::~AWeapon() {
}

AWeapon & AWeapon::operator= (AWeapon const & str) {

	this->dd = str.dd;
	this->_name = str._name;
	this->aap = str.aap;
	return *this;
}

int		AWeapon::getAPCost(void) const {

	return (this->aap);
}

std::string const & AWeapon::getName(void) const {

	return (this->_name);
}

int		AWeapon::getDamage(void) const {

	return (this->dd);
}