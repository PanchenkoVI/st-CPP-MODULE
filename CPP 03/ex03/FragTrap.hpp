/*
* Created: 2021/03/28
*/

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string const name);
		FragTrap(FragTrap const & copy);
		~FragTrap();

		FragTrap &operator= (const FragTrap &op);

		void generationRandomAttacks(void);
		void printf_speech(void);
		void vaulthunter_dot_exe(std::string const & target);
};

#endif