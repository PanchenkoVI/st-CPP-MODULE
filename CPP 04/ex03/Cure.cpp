/*
* Created: 2021/03/30
*/

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
}

Cure::Cure(const Cure& str): AMateria("cure") {

	*this = str;
}

Cure::~Cure() {
}

Cure & Cure::operator=(const Cure& str) {

	if (this != &str)
		setXP(str.getXP());
	return (*this);
}

AMateria * Cure::clone() const {

	return new Cure(*this);
}

void Cure::use(ICharacter & target) {

	setXP(getXP() + 10);
	std::cout << "* heals ";
	std::cout << target.getName();
	std::cout << "'s wounds *\n";
}
