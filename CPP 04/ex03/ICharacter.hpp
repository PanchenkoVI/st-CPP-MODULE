/*
* Created: 2021/03/30
*/

#ifndef ICHARACTER_H
#define ICHARACTER_H

class AMateria;

#include "AMateria.hpp"

#include <string>

class ICharacter {
	public:
		virtual ~ICharacter() {}
		virtual const std::string & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif