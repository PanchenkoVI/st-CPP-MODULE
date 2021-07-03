/*
* Created: 2021/03/30
*/

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(Sorcerer const & line) {

	this->_name = line._name;
	this->_title = line._title;
	std::cout << this->_name << ", ";
	std::cout << this->_title << ", is born!\n";
}

Sorcerer::Sorcerer( std::string const & name, std::string const & title) {

	this->_name = name;
	this->_title = title;
	std::cout << this->_name << ", " << this->_title << ", is born!\n";
}

Sorcerer::~Sorcerer() {

	std::cout << this->_name << ", " << this->_title;
	std::cout << ", is dead. Consequences will never be the same!\n";
}

Sorcerer & Sorcerer::operator= (Sorcerer const & line) {

	this->_title = line._title;
	this->_name = line._name;
	return (*this);
}

std::ostream & operator<< (std::ostream & line, Sorcerer const & src) {

	line << "I am " << src.getName() << ", " << src.getTitle() 
		<< ", and I like ponies!\n";
	return (line);
}

std::string const & Sorcerer::getTitle(void) const {

	return (this->_title);
}

std::string const & Sorcerer::getName(void) const {

	return (this->_name);
}

void Sorcerer::polymorph(Victim const & str) const {

	str.getPolymorphed();
}