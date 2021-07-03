/*
* Created: 2021/03/26
*/

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int		main(void)	{

	ZombieHorde *zh;

	zh = new ZombieHorde(7);
	zh->announce();
	delete zh;
	return (0);
}