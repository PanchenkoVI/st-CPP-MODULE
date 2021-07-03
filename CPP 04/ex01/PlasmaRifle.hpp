/*
* Created: 2021/03/30
*/

#ifndef PLAMARIFLE_HPP
# define PLAMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const & str);
		virtual ~PlasmaRifle();
		void attack() const;
		PlasmaRifle &operator=(PlasmaRifle const & str);
};

#endif