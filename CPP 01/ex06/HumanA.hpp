/*
* Created: 2021/03/26
*/

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

#include <string> 
#include <iostream> 

class HumanA
{
	private:
		std::string _name;
		Weapon &_wp;

	public:
		HumanA(std::string, Weapon&);
		~HumanA();

		void attack(void);
};

#endif