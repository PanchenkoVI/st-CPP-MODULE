/*
* Created: 2021/03/30
*/

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
	public:
		Enemy(int hp, std::string const & type);
		virtual ~Enemy();
		std::string const & getType() const;
		int getHP() const;

		virtual void takeDamage(int i);

		Enemy(Enemy const & i);
		Enemy &operator= (Enemy const & i);

	protected:
		Enemy();
		std::string _type;
		int _hp;
};

#endif