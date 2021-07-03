/*
* Created: 2021/03/28
*/

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include <iostream>
#include <cmath>
#include <ctime>

# define RED		"\033[1;31m"
# define GREEN		"\033[1;32m"
# define END		"\033[0m"

class FragTrap
{
	private:
		std::string _name;	
		int _hitPoints;
		int _maxHitPoints;
		int _energyPoints;
		int _maxEnergyPoints;
		int _level;
		int _meleeAttackDamage;
		int _rangedAttackDamage;
		int _armorDamageReduction;
		void generationRandomAttacks(void);
		
	public:
		FragTrap();
		FragTrap(std::string const name);
		FragTrap(FragTrap const & copy);
		~FragTrap();

		FragTrap &operator= (const FragTrap &op);

		void printf_speech(void);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);
};

#endif