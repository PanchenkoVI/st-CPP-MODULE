/*
* Created: 2021/03/30
*/

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
	public:
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const &);
		virtual ~AssaultTerminator();
		ISpaceMarine *clone(void) const;
		void battleCry() const;
		void meleeAttack() const;		
		void rangedAttack() const;
		AssaultTerminator &operator= (AssaultTerminator const &);
};

#endif