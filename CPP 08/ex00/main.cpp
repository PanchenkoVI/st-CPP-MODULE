/*
* Created: 2021/04/05
*/

#include "easyfind.hpp"

#include <string>
#include <vector>
#include <deque>
#include <list>

int		main(void)
{
	std::cout << GREEN << "\t<======|VECTOR|======>" << END << std::endl;
	std::vector <int> v_i;
	std::vector <float> v_f;
	std::vector <double> v_d;
	std::vector <char> v_c;

	std::cout << "#===========> INT" << std::endl;
	try
	{
		std::cout << GREEN << "|OK   | VALID ARG   = ";
		v_i.push_back(1);
		v_i.push_back(2);
		v_i.push_back(3);
		v_i.push_back(4);
		v_i.push_back(4);
		std::cout << *easyfind(v_i, 4) << std::endl;
		std::cout << *easyfind(v_i, 10) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "|ERROR| INVALID ARG = 10 " << END << std::endl;
	}
	std::cout << "#===========> FLOAT" << std::endl;
	try
	{
		std::cout << GREEN << "|OK   | VALID ARG   = ";
		v_f.push_back(5);
		v_f.push_back(6);
		v_f.push_back(7);
		v_f.push_back(8);
		v_f.push_back(9);
		std::cout << *easyfind(v_f, 6) << std::endl;
		std::cout << *easyfind(v_f, 10) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "|ERROR| INVALID ARG = 10 " << END << std::endl;
	}
	std::cout << "#===========> DOUBLE" << std::endl;
	try
	{
		std::cout << GREEN << "|OK   | VALID ARG   = ";
		v_d.push_back(1);
		v_d.push_back(2);
		v_d.push_back(3);
		v_d.push_back(4);
		v_d.push_back(5);
		std::cout << *easyfind(v_d, 5) << std::endl;
		std::cout << *easyfind(v_d, 10) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "|ERROR| INVALID ARG = 10 " << END << std::endl;
	}
	std::cout << "#===========> CHAR" << std::endl;
	try
	{
		std::cout << GREEN << "|OK   | VALID ARG   = ";
		v_c.push_back(' ');
		v_c.push_back('b');
		v_c.push_back('c');
		v_c.push_back('d');
		v_c.push_back('e');
		std::cout << "char 32 = \'"<< *easyfind(v_c, 32) << "\'" <<std::endl;
		std::cout << *easyfind(v_c, 'a') <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "|ERROR| INVALID ARG = 'a' " << END << std::endl;
	}
	std::cout << GREEN << "\n\t<======|LIST|======>" << END << std::endl;
	std::list <int> l_i;
	std::list <float> l_f;
	std::list <double> l_d;
	std::list <char> l_c;
	std::list <std::string> l_s;
	std::cout << "#===========> INT" << std::endl;
	try
	{
		std::cout << GREEN << "|OK   | VALID ARG   = ";
		l_i.push_back(1);
		l_i.push_back(2);
		l_i.push_back(3);
		l_i.push_back(4);
		l_i.push_back(5);
		std::cout << *easyfind(l_i, 1) << std::endl;
		std::cout << *easyfind(l_i, 6) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "|ERROR| INVALID ARG = 6 " << END << std::endl;
	}
	std::cout << "#===========> FLOAT" << std::endl;
	try
	{
		std::cout << GREEN << "|OK   | VALID ARG   = ";
		l_f.push_back(1);
		l_f.push_back(2);
		l_f.push_back(3);
		l_f.push_back(4);
		l_f.push_back(5);
		std::cout << *easyfind(l_f, 1) << std::endl;
		std::cout << *easyfind(l_f, 9) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "|ERROR| INVALID ARG = 9 " << END << std::endl;
	}
	std::cout << "#===========> DOUBLE" << std::endl;
	try
	{
		std::cout << GREEN << "|OK   | VALID ARG   = ";
		l_d.push_back(1);
		l_d.push_back(2);
		l_d.push_back(3);
		l_d.push_back(4);
		l_d.push_back(5);
		std::cout << *easyfind(l_d, 1) << std::endl;
		std::cout << *easyfind(l_d, 10) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "|ERROR| INVALID ARG = 10 " << END << std::endl;
	}
	std::cout << "#===========> CHAR" << std::endl;
	try
	{
		std::cout << GREEN << "|OK   | VALID ARG   = ";
		l_c.push_back('a');
		l_c.push_back('b');
		l_c.push_back('c');
		l_c.push_back('d');
		l_c.push_back('e');
		std::cout << *easyfind(l_c, 'a') << std::endl;
		std::cout << *easyfind(l_c, '2') << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "|ERROR| INVALID ARG = '2' " << END << std::endl;
	}
	std::cout << GREEN << "\n\t<======|DEQUE|======>" << END << std::endl;
	std::deque <int> d_i;
	std::deque <float> d_f;
	std::deque <double> d_d;
	std::deque <char> d_c;
	std::cout << "#===========> INT" << std::endl;
	try
	{
		std::cout << GREEN << "|OK   | VALID ARG   = ";
		d_i.push_back(1);
		d_i.push_back(2);
		d_i.push_back(3);
		d_i.push_back(4);
		d_i.push_back(5);
		std::cout << *easyfind(d_i, 1) << std::endl;
		std::cout << *easyfind(d_i, 6) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "|ERROR| INVALID ARG = 6 " << END << std::endl;
	}
	std::cout << "#===========> FLOAT" << std::endl;
	try
	{
		std::cout << GREEN << "|OK   | VALID ARG   = ";
		d_f.push_back(1);
		d_f.push_back(2);
		d_f.push_back(3);
		d_f.push_back(4);
		d_f.push_back(5);
		std::cout << *easyfind(d_f, 1) << std::endl;
		std::cout << *easyfind(d_f, 6) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "|ERROR| INVALID ARG = 6 " << END << std::endl;
	}
	std::cout << "#===========> DOUBLE" << std::endl;		
	try
	{
		std::cout << GREEN << "|OK   | VALID ARG   = ";
		d_d.push_back(1);
		d_d.push_back(2);
		d_d.push_back(3);
		d_d.push_back(4);
		d_d.push_back(5);
		std::cout << *easyfind(l_f, 1) << std::endl;
		std::cout << *easyfind(l_f, 6) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "|ERROR| INVALID ARG = 6 " << END << std::endl;
	}
	std::cout << "#===========> CHAR" << std::endl;
	try
	{
		std::cout << GREEN << "|OK   | VALID ARG   = ";
		d_c.push_back('a');
		d_c.push_back('b');
		d_c.push_back('c');
		d_c.push_back('d');
		d_c.push_back('e');
		std::cout << *easyfind(d_c, 'b') << std::endl;
		std::cout << *easyfind(d_c, 'f') << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "|ERROR| INVALID ARG = 'f' " << END << std::endl;
	}
	std::cout << "#===========>" << std::endl;
	return (0);
}