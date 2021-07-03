/*
* Created: 2021/03/28
*/

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string const _name);
		ScavTrap(ScavTrap const & aft);
		~ScavTrap();

		ScavTrap &operator= (const ScavTrap &renewal);

		void randomChallenge(void);
		void printf_speechh(void);
		void challengeNewcomer(std::string const & target);
};

#endif