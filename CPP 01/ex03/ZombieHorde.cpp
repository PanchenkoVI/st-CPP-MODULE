/*
* Created: 2021/03/26
*/

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(void) {
	
	std::cout << "ZombieHorde instal." << std::endl; 
}

ZombieHorde::ZombieHorde(int nn) {

	int i;

	i = 0;

	n = nn;
	srand(time(NULL));
	if (nn > 0)
		zzz = new Zombie[nn];
	while (i < nn)
	{
		zzz[i].getDate("Horde", this->randomChump());		
		i++;
	}
}

ZombieHorde::~ZombieHorde(void) {

	std::cout << "ZombieHorde destroy." << std::endl; 
	delete [] zzz;
}

std::string	ZombieHorde::randomChump(void) {

	std::string lt[17] = {	"Aaron", "Abraham", "Adam",		\
							"Adrian", "Austin", "Aidan",	\
							"Alan", "Albert", "Alejandro",	\
							"Alex", "Alexander", "Alfred",	\
							"Andrew", "Angel", "Anthony",	\
							"Antonio", "Ashton"};

	std::string dgt[10] = {"0123456789"};

	std::string lt2 = lt[rand() % 17] + "_" + dgt[0][rand() % 10];
	return (lt2);
}

void	ZombieHorde::announce(void) {

	int i;

	i = 0;
	while (i < n)
	{
		zzz[i].announce();
		i++;
	}
}
