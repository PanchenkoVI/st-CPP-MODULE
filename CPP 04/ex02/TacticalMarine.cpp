/*
* Created: 2021/03/30
*/

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()  {

	std::cout << "Tactical Marine ready for battle!";
	std::cout << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &str) {

	std::cout << "Tactical Marine ready for battle!";
	std::cout << std::endl;
	(void)str;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &str) {

	(void)str;
	return (*this);
}

TacticalMarine::~TacticalMarine() {

	std::cout <<  "Aaargh...";
	std::cout << std::endl;
}

ISpaceMarine *TacticalMarine::clone(void) const {

	TacticalMarine *cpy = new TacticalMarine(*this);
	return (cpy);
}

void TacticalMarine::rangedAttack(void) const {

	std::cout << "* attacks with bolter *";
	std::cout << std::endl;
}

void TacticalMarine::battleCry(void) const {

	std::cout << "For the holy PLOT!";
	std::cout << std::endl;
}

void TacticalMarine::meleeAttack(void) const {

	std::cout << "* attacks with chainsword *";
	std::cout << std::endl;
}