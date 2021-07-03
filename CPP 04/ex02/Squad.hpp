/*
* Created: 2021/03/30
*/

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include <cstddef>
#include <iostream>

class Squad: public ISquad
{
	public:
		Squad();
		Squad(Squad const &);
		virtual ~Squad();
		ISpaceMarine *getUnit(int) const;
		Squad &operator=(Squad const &);

		int getCount() const;
		int push(ISpaceMarine *);

	private:
		ISpaceMarine **units;
		int count;
};

#endif