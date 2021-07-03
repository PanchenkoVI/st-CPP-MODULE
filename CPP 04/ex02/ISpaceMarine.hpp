/*
* Created: 2021/03/30
*/

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

#include <cstddef>
#include <iostream>

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine* clone() const = 0;
		virtual void battleCry() const = 0;
		virtual void rangedAttack() const = 0;
		virtual void meleeAttack() const = 0;
};

#endif