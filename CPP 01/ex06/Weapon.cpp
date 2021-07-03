/*
* Created: 2021/03/26
*/

# include "Weapon.hpp"

Weapon::Weapon(std::string typ): type(typ) {

	std::cout << "Take Weapon." << std::endl;
}

Weapon::~Weapon(){

	std::cout << "Throw out Weapon." << std::endl;
}

const std::string &Weapon::getType(void) const{

	return (type);
}
void	Weapon::setType(std::string typ){

	type = typ;
}