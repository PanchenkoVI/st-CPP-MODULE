/*
* Created: 2021/03/26
*/

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
	private:
		int n;
		Zombie *zzz;

	public:
		ZombieHorde(void);
		ZombieHorde(int);
		~ZombieHorde(void);

		void announce(void);
		std::string	randomChump(void);
};

#endif