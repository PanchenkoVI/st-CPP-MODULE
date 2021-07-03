/*
* Created: 2021/03/30
*/

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
}

Ice::Ice(const Ice& other) : AMateria("ice") {

	*this = other;
}

Ice::~Ice() {
}

Ice& Ice::operator=(const Ice & str) {

	if (this == &str)
		return (*this);
	setXP(str.getXP());
	return (*this);
}

AMateria* Ice::clone() const {

	return new Ice(*this);
}

void Ice::use(ICharacter& target) {

	setXP(getXP() + 10);
	std::cout << "* shoots an ice bolt at ";
	std::cout << target.getName();
	std::cout << " *\n";
}
