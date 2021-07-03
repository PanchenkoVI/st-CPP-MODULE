/*
* Created: 2021/03/28
*/

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	ScavTrap st("ScavTr");	
	FragTrap ft("FragTr");
	NinjaTrap nt("NinjaTr");
	ClapTrap ct;

	nt.rangedAttack("hous");
	nt.meleeAttack("chair");

	nt.takeDamage(10);
	nt.takeDamage(25);
	nt.takeDamage(50);

	nt.beRepaired(50);
	nt.beRepaired(101);
	nt.beRepaired(-1);

	nt.takeDamage(100);
	nt.takeDamage(-1);

	nt.ninjaShoebox(st);
	nt.ninjaShoebox(ft);
	nt.ninjaShoebox(nt);
	nt.ninjaShoebox(ct);

	return (0);
}