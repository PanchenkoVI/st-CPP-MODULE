/*
* Created: 2021/03/30
*/

#include "AMateria.hpp"

AMateria::AMateria( const std::string& type ) : _xp(0) {

	this->_type = type;
}

AMateria::AMateria( AMateria const & str ) {

	*this = str;
}

AMateria& AMateria::operator=( AMateria const & str) {

	if (this != &str)
	{
		_type = str._type;
		_xp = str._xp;
	}
	return *this;
}

AMateria::~AMateria() {
}

const std::string& AMateria::getType(void) const {

	return (_type);
}

unsigned int AMateria::getXP(void) const {
	
	return (_xp);
}

void AMateria::setXP(unsigned int xp) {
	
	this->_xp = xp;
}

void AMateria::use(ICharacter & ) {

	this->_xp = this->_xp + 10;
}