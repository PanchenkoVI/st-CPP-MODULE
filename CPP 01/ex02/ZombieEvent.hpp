/*
* Created: 2021/03/26
*/

#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include <iostream>
# include <ctime>

#include "Zombie.hpp"

class ZombieEvent
{
		std::string type;
		std::string name;

	public:
		ZombieEvent(void);
		~ZombieEvent(void);

		void	setZombieType(std::string);
		Zombie	*newZombie(std::string);
		Zombie	*randomChump(void);
};

#endif