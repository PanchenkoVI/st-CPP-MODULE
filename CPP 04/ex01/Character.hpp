/*
* Created: 2021/03/30
*/

#ifndef CHAEACTER_HPP
# define CHAEACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

# define BLUE		"\033[1;34m"
# define FIO		"\033[1;35m"
# define RED		"\033[1;31m"
# define GREEN		"\033[1;32m"
# define END		"\033[0m"

class Character
{
	Character();
	int _ap;
	AWeapon *_aw;
	std::string _name;

	public:
		Character(std::string const & name);
		Character(Character const & str);

		Character & operator= (Character const & str);
		AWeapon *getWeapon() const;
		int getAP() const;

		~Character();
		void recoverAP();
		void equip(AWeapon *);
		void attack(Enemy *);
		std::string const & getName() const;
};

std::ostream & operator<< (std::ostream &o, Character const &str);

#endif

