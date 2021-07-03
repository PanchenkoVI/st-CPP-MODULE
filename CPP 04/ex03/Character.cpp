/*
* Created: 2021/03/30
*/

#include "Character.hpp"

Character::Character(const std::string & name) {

	int i = 0;

	this->_name = name;
	while (i < 4)
	{
		_am[i] = 0;
		i++;
	}
}

Character::Character(const Character& str) {

	int i = 0;

	while (i < 4)
	{
		_am[i] = 0;
		i++;
	}
	*this = str;
}

Character::~Character() {

	int i = 0;

	while (i < 4)
	{
		if (_am[i])
			delete _am[i];
		i++;
	}
}

void Character::clear() {

	int i = 0;

	while (i < 4)
	{
		if (_am[i])
			delete _am[i];
		i++;
	}
}

Character & Character::operator= (const Character& str) {

	int i = 0;

	this->_name = str._name;
	clear();
	while (i < 4)
	{
		if (_am[i] == (str._am[i]))
			str._am[i]->clone();
		i++;
	}
	return *this;
}

const std::string &	Character::getName() const {
	
	return (_name);
}

void Character::equip(AMateria* m) {

	int i = 0;

	while (i < 4)
	{
		if (!_am[i])
		{
			_am[i] = m;
			break ;
		}
		i++;
	}
}

void Character::unequip(int idx) {

	if (idx < 0)
		return ;
	if (idx > 3 )
		return ;
	if (!_am[idx])
		return ;
	_am[idx] = 0;
}

void Character::use(int idx, ICharacter& target) {

	if (idx < 0)
		return ;
	if (idx > 3)
		return ;
	if (!_am[idx])
		return ;
	_am[idx]->use(target);
}
