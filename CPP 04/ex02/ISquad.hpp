/*
* Created: 2021/03/30
*/

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include "ISpaceMarine.hpp"
#include <cstddef>
#include <iostream>

class ISquad
{
	public:
		virtual ~ISquad() {};
		virtual int getCount(void) const = 0;
		virtual ISpaceMarine* getUnit(int) const = 0;
		virtual int push(ISpaceMarine*) = 0;
};

#endif