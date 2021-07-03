/*
* Created: 2021/03/30
*/

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>
#include <string>

# define BLUE		"\033[1;34m"
# define FIO		"\033[1;35m"
# define RED		"\033[1;31m"
# define GREEN		"\033[1;32m"
# define END		"\033[0m"

class AWeapon
{
	public:
		AWeapon(std::string const & name, int apcost, int damege);
		virtual ~AWeapon();
		std::string const & getName() const;		
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;

		AWeapon(AWeapon const & str);
		AWeapon & operator=(AWeapon const & str);
	
	protected:
		AWeapon();
		int dd;
		int aap;
		std::string _name;
};

#endif