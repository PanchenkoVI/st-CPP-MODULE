/*
* Created: 2021/03/28
*/

#include "FragTrap.hpp"

int main(void)
{
	std::cout << RED << "        <--------------------|__WELCOME__|--------------------->\n" << END;
	std::cout << RED << "                              <--------->\n\n" <<  END;
	FragTrap ft("FragTrap");
	//FragTrap ft;

	ft.rangedAttack("Enemy-ra");
	ft.meleeAttack("Enemy-ma");

	ft.takeDamage(10);
	ft.takeDamage(10);
	ft.takeDamage(20);
	ft.takeDamage(-10);
	ft.takeDamage(-111111);
	ft.takeDamage(1111111110);

	ft.takeDamage(15);
	ft.beRepaired(5);

	ft.takeDamage(1000);
	ft.beRepaired(20000);

	ft.takeDamage(1000);
	ft.beRepaired(222);

	ft.vaulthunter_dot_exe("Enemy");
	ft.vaulthunter_dot_exe("Enemy");
	ft.vaulthunter_dot_exe("Enemy");
	ft.vaulthunter_dot_exe("Enemy");
	ft.vaulthunter_dot_exe("Enemy");
	ft.vaulthunter_dot_exe("Enemy");

	return (0);
}