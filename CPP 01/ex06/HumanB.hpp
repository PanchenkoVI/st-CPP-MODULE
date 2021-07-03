/*
* Created: 2021/03/26
*/

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

#include <iostream>

class HumanB
{
	private:
		std::string _name;
		Weapon *_wp;

	public:
		HumanB(std::string);
		~HumanB();

		void attack(void);
		void setWeapon(Weapon&);
};

#endif