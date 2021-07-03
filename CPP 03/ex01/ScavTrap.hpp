/*
* Created: 2021/03/28
*/

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

# define RED		"\033[1;31m"
# define GREEN		"\033[1;32m"
# define END		"\033[0m"

class ScavTrap
{
	private:
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
		ScavTrap();
		ScavTrap(std::string const _name);
		ScavTrap(ScavTrap const & aft);
		~ScavTrap();

		ScavTrap &operator= (const ScavTrap &renewal);

		void randomChallenge(void);
		void printf_speech(void);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer(std::string const & target);
};

#endif