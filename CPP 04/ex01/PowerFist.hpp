/*
* Created: 2021/03/30
*/

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	public:
		PowerFist();
		PowerFist(PowerFist const & str);
		virtual ~PowerFist();
		void attack(void) const;
		PowerFist &operator=(PowerFist const & str);
};

#endif