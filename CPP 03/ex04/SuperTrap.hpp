/*
* Created: 2021/03/28
*/

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>

# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap: public NinjaTrap, public FragTrap
{
	public:
		SuperTrap(std::string  const &);
		SuperTrap(SuperTrap const &);
		SuperTrap &operator= (SuperTrap const &);
		virtual ~SuperTrap();

		void meleeAttack(std::string const &target);
		void rangedAttack(std::string const &target);
};

#endif