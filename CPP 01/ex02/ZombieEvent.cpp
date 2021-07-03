/*
* Created: 2021/03/26
*/

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {

	std::cout << "ZombieEvent install." << std::endl;
	srand(time(NULL));	
	type = "non";
	name = "non";
	return ;
}

ZombieEvent::~ZombieEvent(void)	{

	std::cout << "ZombieEvent destroy." << std::endl;
	type = "";
	return ;
}

void	ZombieEvent::setZombieType(std::string t) {

	type = t;
}

Zombie	*ZombieEvent::newZombie(std::string name) {

	Zombie *zb = new Zombie;
	
	zb->getDate(name, type);
	return (zb);
}

Zombie	*ZombieEvent::randomChump(void) {

Zombie		*z = new Zombie;

std::string lt_name[9] = {	"name_1", \
							"name_2", \
							"name_3", \
							"name_4", \
							"name_5", \
							"name_6", \
							"name_7", \
							"name_8", \
							"name_9"};

std::string lt_type[9] = {	"type_1", \
							"type_2", \
							"type_3", \
							"type_4", \
							"type_5", \
							"type_6", \
							"type_7", \
							"type_8", \
							"type_9"};

z->getDate(lt_name[rand() % 9], lt_type[rand() % 9]);
z->announce();
delete z;

return (0);
}