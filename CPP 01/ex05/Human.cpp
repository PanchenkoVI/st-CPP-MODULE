/*
* Created: 2021/03/26
*/

#include "Human.hpp"

Human::Human(void) {
}

Human::~Human(void) {
}

const Brain &Human::getBrain(void) const {

	return (brain);
}

std::string Human::identify(void) const {

	return (brain.identify());
}