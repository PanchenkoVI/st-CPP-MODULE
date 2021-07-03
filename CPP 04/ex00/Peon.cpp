/*
* Created: 2021/03/30
*/

#include "Peon.hpp"

Peon::Peon(Peon const & line): Victim(line._name) {

	std::cout << GREEN << "Zog zog." << std::endl << END;
}

Peon::Peon(std::string const & str): Victim(str) {

	std::cout << GREEN << "Zog zog." << std::endl << END;
}

Peon::~Peon() {

	std::cout  << GREEN<< "Bleuark..." << std::endl << END;
}

void Peon::getPolymorphed(void) const {

	std::cout << GREEN << this->_name;
	std::cout << " has been turned into a pink pony!";
	std::cout << std::endl << END;
}

Peon & Peon::operator=(Peon const & str) {

	if (this != &str)
		this->_name = str._name;
	return (*this);
}