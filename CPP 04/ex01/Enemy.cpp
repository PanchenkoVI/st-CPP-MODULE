/*
* Created: 2021/03/30
*/

#include "Enemy.hpp"

Enemy::Enemy() {
}

Enemy::Enemy(Enemy const & i) {

	this->_type = i._type;
	this->_hp = i._hp;
}

Enemy::Enemy(int hp, std::string const & str) {

	this->_type = str;	
	this->_hp = hp;
}

Enemy::~Enemy() {
}

Enemy &Enemy::operator=(Enemy const & i) {

	this->_hp = i._hp;
	this->_type = i._type;
	return *this;
}

int Enemy::getHP() const {

    return (this->_hp);
}
std::string const &Enemy::getType(void) const {

	return (this->_type);
}

void Enemy::takeDamage(int i) {
	
	if (i >= 0)
	{
		this->_hp = _hp - i;
		if (this->_hp < 0)
			this->_hp = 0;
	}
}