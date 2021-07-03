/*
* Created: 2021/03/28
*/

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cmath>
#include <ctime>

# define BLUE		"\033[1;34m"
# define FIO		"\033[1;35m"
# define RED		"\033[1;31m"
# define GREEN		"\033[1;32m"
# define END		"\033[0m"

class ClapTrap
{
	protected:
		int _hitPoints;
		int _maxHitPoints;
		int _energyPoints;
		int _maxEnergyPoints;
		int _level;
		std::string _name;
		int _meleeAttackDamage;
		int _rangedAttackDamage;
		int _armorDamageReduction;

	public:
		ClapTrap();
		ClapTrap(std::string const nam);
		ClapTrap(ClapTrap const & aft);
		virtual ~ClapTrap();

		ClapTrap &operator= (const ClapTrap &renewal);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName();
		int getHit();
};

#endif