/*
* Created: 2021/03/28
*/

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string const name);
		~NinjaTrap();
		NinjaTrap &operator= (const NinjaTrap &renewal);

		void ninjaShoebox(NinjaTrap &trap);
		void ninjaShoebox(ClapTrap &trap);
		void ninjaShoebox(ScavTrap &trap);
		void ninjaShoebox(FragTrap &trap);
};

#endif