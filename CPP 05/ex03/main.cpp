/*
* Created: 2021/03/31
*/

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

#include "Intern.hpp"

int		main(void)
{
	Bureaucrat	br4("BR-4", 149);
	Bureaucrat	br3("BR-3", 100);
	Bureaucrat	br2("BR-2", 50);
	Bureaucrat	br1("BR-1", 1);

	Intern someRandomIntern;
	Form* ppf;
	Form* scf;
	Form* rrf;

	std::cout << "#========> FORMS" << std::endl;
	rrf = someRandomIntern.makeForm("robotomy", "Bender1");
	scf = someRandomIntern.makeForm("presidential", "Bender2");
	ppf = someRandomIntern.makeForm("shrubbery", "Bender3");
	std::cout << "#========> DESCRIPTION";	
	std::cout << *ppf;
	std::cout << *scf;
	std::cout << *rrf;
	std::cout << "#========> Bureaucrats" << std::endl;
	std::cout << br4 << std::endl;
	std::cout << br3 << std::endl;
	std::cout << br2 << std::endl;
	std::cout << br1 << std::endl;
	std::cout << "#========> TEST_1 (shrubbery)" << std::endl;
	Form* test1;

	try
	{
		test1 = someRandomIntern.makeForm("aaaaaaa", "All");
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}
	try
	{
		test1 = someRandomIntern.makeForm("shrubbery", "Oll");
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}
	std::cout << *test1 << std::endl;
	std::cout << "#========> TEST_2 (presidential)" << std::endl;
	Form* test2;	
	try
	{
		test2 = someRandomIntern.makeForm("bbbbbbb", "All");
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}
	try
	{
		test2 = someRandomIntern.makeForm("presidential", "Oll");
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}
	std::cout << *test2 << std::endl;

	std::cout << "#========> TEST_3 (robotomy)" << std::endl;
	Form* test3;
	try
	{
		test3 = someRandomIntern.makeForm("sdfsdfa", "All");
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}
	try
	{
		test3 = someRandomIntern.makeForm("robotomy", "Oll");
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}
	std::cout << *test3 << std::endl;

	delete test1;
	delete test2;
	delete test3;
	delete ppf;
	delete rrf;
	delete scf;

	return (0);
}
