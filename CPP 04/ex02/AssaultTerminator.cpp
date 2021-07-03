/*
* Created: 2021/03/30
*/

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {

	std::cout << "* teleports from space *";
	std::cout << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & str) {

	std::cout << "* teleports from space *";
	std::cout << std::endl;
	(void)str;
}

AssaultTerminator::~AssaultTerminator() {

	std::cout <<  "I ll be back...";
	std::cout << std::endl;
}

AssaultTerminator & AssaultTerminator::operator= (AssaultTerminator const & str) {

	(void)str;
	return *this;
}

ISpaceMarine *AssaultTerminator::clone() const {

	AssaultTerminator *cpy = new AssaultTerminator(*this);
	return cpy;
}

void AssaultTerminator::battleCry() const {

	std::cout << "This code is unclean. PURIFY IT!";
	std::cout << std::endl;
}

void AssaultTerminator::rangedAttack() const {

	std::cout << "* does nothing *";
	std::cout << std::endl;
}

void AssaultTerminator::meleeAttack() const {

	std::cout << "* attacks with chainfists *";
	std::cout << std::endl;
}