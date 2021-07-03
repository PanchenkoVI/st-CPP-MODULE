/*
* Created: 2021/03/30
*/

#ifndef RADCORPION_HPP 
# define RADCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy
{
	public:
		RadScorpion();
		RadScorpion(RadScorpion const & str);
		virtual ~RadScorpion();
		RadScorpion & operator= (RadScorpion const & str);

		void takeDamage(int i);
};

#endif