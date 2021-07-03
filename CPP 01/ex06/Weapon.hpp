/*
* Created: 2021/03/26
*/

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string type;
		
	public:
		Weapon(std::string);
		~Weapon();

		const std::string &getType(void) const;
		void	setType(std::string);
};

#endif