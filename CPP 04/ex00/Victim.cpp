/*
* Created: 2021/03/30
*/

#include "Victim.hpp"

Victim::Victim() {
}

Victim::Victim(Victim const & line) {

	*this = line;
}

Victim::Victim(std::string const & name) {

	this->_name = name;
	std::cout << RED << "Some random victim called ";
	std::cout << this->_name;
	std::cout << " just appeared!" << END << std::endl;
}

Victim::~Victim() {
	
	std::cout << RED << "Victim ";
	std::cout << this->_name;
	std::cout << " just died for no apparent reason!" << END  << std::endl;
}

Victim & Victim::operator= (Victim const & str) {
	
	this->_name = str._name;
	return (*this);
}

std::ostream & operator<< (std::ostream &om, Victim const & src) {
	
	om << RED << "I'm " << src.getName() << " and I like otters!" << END << std::endl;
	return (om);
}

void Victim::getPolymorphed() const {

	std::cout << RED << this->_name;
	std::cout << " has been turned into a cute little sheep!\n" << END;
}

std::string Victim::getName() const {

	return (this->_name);
}
