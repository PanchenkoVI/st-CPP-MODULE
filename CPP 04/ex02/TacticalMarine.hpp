/*
* Created: 2021/03/30
*/

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(TacticalMarine const &);
		virtual ~TacticalMarine();
		void battleCry() const;
		void meleeAttack() const;		
		void rangedAttack() const;
		ISpaceMarine *clone() const;
		TacticalMarine &operator=(TacticalMarine const &);
};

#endif