/*
* Created: 2021/03/30
*/

# include "Deon.hpp"

Deon::Deon(Deon const & line): Victim(line._name) {

	std::cout << FIO << "Zooooog...." << std::endl << END;
}

Deon::Deon(std::string const & str): Victim(str) {
	
	std::cout << FIO << "Zooooog...." << std::endl << END;
}

Deon::~Deon() {

	std::cout << FIO << "Bleeeeeuuuuukkkkkk......." << std::endl << END;
}

void Deon::getPolymorphed(void) const {
	std::cout << FIO << this->_name;
	std::cout << " has been turned into a PINK pony!!!!";
	std::cout << std::endl << END;
}

Deon & Deon::operator=(Deon const & str) {

	this->_name = str._name;
	return (*this);
}