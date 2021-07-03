/*
* Created: 2021/03/30
*/

#include "Character.hpp"

Character::Character() {
}

Character::Character(Character const & str) {

	this->_ap = str._ap;
	this->_name = str._name;	
	this->_aw = str._aw;
}

Character::Character(std::string const & name) {

	this->_aw = NULL;
	this->_name = name;
	this->_ap = 40;
}

Character::~Character() {
}

Character &Character::operator=(Character const & base)
{

	this->_name = base._name;
	this->_ap = base._ap;
	this->_aw = base._aw;
	return (*this);
}

void Character::recoverAP(void) {

	this->_ap += 10;
	if (this->_ap <= 40)
		return ;
	else
		this->_ap = 40;
}

void Character::equip(AWeapon *wp) {

	this->_aw = wp;
}

void Character::attack(Enemy *str)
{
	if (!this->_aw)
		return ;
	if (!str)
		return ;
	if (this->_aw->getAPCost() > this->_ap)
		return ;
	this->_ap =  this->_ap - _aw->getAPCost();
	std::cout << this->_name;
	std::cout << " attacks ";
	std::cout << str->getType();
	std::cout << " with a ";
	std::cout << this->_aw->getName();
	std::cout << std::endl;
	this->_aw->attack();
	str->takeDamage(this->_aw->getDamage());
	if (!(str->getHP()))
		delete str;
	else
		return ;
}

std::string const & Character::getName() const {

	return (this->_name);
}

int Character::getAP(void) const {

	return (this->_ap);
}

AWeapon *Character::getWeapon(void) const {

	return (this->_aw);
}

std::ostream &operator<<(std::ostream &out, Character const &base) {

	out << base.getName() << " has " << base.getAP();
	if (!(base.getWeapon()))
		out << " AP and is unarmed\n";
	else
		out << " AP and wields a " << base.getWeapon()->getName() << "\n";
	return (out);  
}