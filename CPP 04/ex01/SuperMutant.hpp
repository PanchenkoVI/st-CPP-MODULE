/*
* Created: 2021/03/30
*/

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:	
		SuperMutant(void);
		SuperMutant(SuperMutant const & str);
		virtual ~SuperMutant();
		SuperMutant & operator= (SuperMutant const & str);

		void	takeDamage(int i);
};

#endif