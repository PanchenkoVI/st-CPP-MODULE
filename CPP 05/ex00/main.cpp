/*
* Created: 2021/03/31
*/

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "<==========|WELCOME!|==========>" << std::endl;
	Bureaucrat *test1 = new Bureaucrat("A", 149);
	Bureaucrat *test2 = new Bureaucrat("B", 125);
	Bureaucrat *test3 = new Bureaucrat("C", 100);
	Bureaucrat *test4 = new Bureaucrat("D", 25);
	Bureaucrat *test5 = new Bureaucrat("E", 10);
	Bureaucrat *test6 = new Bureaucrat("F", 1);

	std::cout << *test1 << std::endl;
	std::cout << *test2 << std::endl;
	std::cout << *test3 << std::endl;
	std::cout << *test4 << std::endl;
	std::cout << *test5 << std::endl;
	std::cout << *test6 << std::endl;
	std::cout << "<==========>" << std::endl;
	try
	{
		//test6->incrementGrade();
		//std::cout << *test6 << std::endl;
		test6->decrementGrade();
		std::cout << *test6 << std::endl;
		test6->incrementGrade();
		std::cout << *test6 << std::endl;
		test6->decrementGrade();
		std::cout << *test6 << std::endl;
		test6->decrementGrade();
		std::cout << *test6 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}
	std::cout << "<==========|===TEST_1===|==========>" << std::endl;
	try
	{
		std::cout << "START " << *test5 << std::endl;
		test5->incrementGrade();
		std::cout << *test5 << std::endl;
		test5->decrementGrade();
		std::cout << *test5 << std::endl;
		test5->decrementGrade();
		std::cout << *test5 << std::endl;
		test5->decrementGrade();
		std::cout << *test5 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}
	std::cout << "<==========|===TEST_2===|==========>" << std::endl;
	try
	{
		std::cout << "START " << *test4 << std::endl;
		test4->incrementGrade();
		std::cout << *test4 << std::endl;
		test4->decrementGrade();
		std::cout << *test4 << std::endl;
		test4->decrementGrade();
		std::cout << *test4 << std::endl;
		test4->decrementGrade();
		std::cout << *test4 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}
	std::cout << "<==========|===TEST_3===|==========>" << std::endl;
	try
	{
		std::cout << "START " << *test3 << std::endl;
		test3->incrementGrade();
		std::cout << *test3 << std::endl;
		test3->decrementGrade();
		std::cout << *test3 << std::endl;
		test3->decrementGrade();
		std::cout << *test3 << std::endl;
		test3->decrementGrade();
		std::cout << *test3 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}
	std::cout << "<==========|===TEST_4===|==========>" << std::endl;
	try
	{
		std::cout << "START " << *test2 << std::endl;
		test2->incrementGrade();
		std::cout << *test2 << std::endl;
		test2->decrementGrade();
		std::cout << *test2 << std::endl;
		test2->decrementGrade();
		std::cout << *test2 << std::endl;
		test2->decrementGrade();
		std::cout << *test2 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}
	std::cout << "<==========|===TEST_5===|==========>" << std::endl;
	try
	{
		std::cout << "START " << *test1 << std::endl;
		test1->incrementGrade();
		std::cout << *test1 << std::endl;
		test1->decrementGrade();
		std::cout << *test1 << std::endl;
		test1->decrementGrade();
		std::cout << *test1 << std::endl;
		test1->decrementGrade();
		std::cout << *test1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}
	std::cout << "<==========|===TEST_6===|==========>" << std::endl;
	try
	{
		std::cout << "START " << *test1 << std::endl;
		test1->incrementGrade();
		std::cout << *test1 << std::endl;
		test1->decrementGrade();
		std::cout << *test1 << std::endl;
		test1->decrementGrade();
		std::cout << *test1 << std::endl;
		test1->decrementGrade();
		std::cout << *test1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << END << std::endl;
	}
	std::cout << "<==========|==BAD==|==========>" << std::endl;	
	try
	{
		Bureaucrat test7("non", -1);
		std::cout << test7 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED <<  e.what() << END << std::endl;
	}
	std::cout << "<==========|THE_END|==========>" << std::endl;
	delete test1;
	delete test2;
	delete test3;
	delete test4;
	delete test5;
	delete test6;

	return (0);
}