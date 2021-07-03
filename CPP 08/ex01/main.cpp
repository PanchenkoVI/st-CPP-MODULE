/*
* Created: 2021/04/05
*/

#include "span.hpp"

int		main(void)
{
	{
		std::cout << GREEN << "\t<======|TEST_1|======>" << END << std::endl;
		Span sp = Span(10);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Size = "<< sp.getSize() << std::endl;
		std::cout << "Min = "<< sp.shortestSpan() << std::endl;
		std::cout << "Max = "<< sp.longestSpan() << std::endl;
	}
	{
		std::cout << GREEN << "\t<======|TEST_2|======>" << END << std::endl;
		Span sp = Span(20000);
		sp.addNumber(1, 20000);
		
		std::cout << "Size = "<< sp.getSize() << std::endl;
		std::cout << "Min = "<< sp.shortestSpan() << std::endl;
		std::cout << "Max = "<< sp.longestSpan() << std::endl;
	}
	{
		std::cout << GREEN << "\t<======|TEST_3|======>" << END << std::endl;
		try
		{
			Span sp = Span(1);
			sp.addNumber(1, 1);
			std::cout << "1 = "<< sp.getSize() << std::endl;
			std::cout << "2 = "<< sp.shortestSpan() << std::endl;
			std::cout << "3 = "<< sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << END << std::endl;
		}
	}
	{
		std::cout << GREEN << "\t<======|TEST_4|======>" << END << std::endl;
		try
		{
			Span sp = Span(5);
			sp.addNumber(1, 3);
			std::cout << "Size = "<< sp.getSize() << std::endl;
			std::cout << "Min = "<< sp.shortestSpan() << std::endl;
			std::cout << "Max = "<< sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << END << std::endl;
		}
	}
	{
		std::cout << GREEN << "\t<======|TEST_5|======>" << END << std::endl;
		try
		{
			Span sp = Span(10);
			sp.addNumber(1, 5);
			std::cout << "Size = "<< sp.getSize() << std::endl;
			std::cout << "Min = "<< sp.shortestSpan() << std::endl;
			std::cout << "Max = "<< sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << END << std::endl;
		}
	}
	{
		std::cout << GREEN << "\t<======|TEST_6|======>" << END << std::endl;
		try
		{
			Span sp = Span(99999);
			sp.addNumber(1, 50000);
			std::cout << "Size = "<< sp.getSize() << std::endl;
			std::cout << "Min = "<< sp.shortestSpan() << std::endl;
			std::cout << "Max = "<< sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << END << std::endl;
		}
	}
		{
		std::cout << GREEN << "\t<======|TEST_7|======>" << END << std::endl;
		try
		{
			Span sp = Span(5);
			std::cout << "Size = "<< sp.getSize() << std::endl;
			std::cout << "Min = "<< sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << END << std::endl;
		}
	}
	{
		std::cout << GREEN << "\t<======|TEST_8|======>" << END << std::endl;
		try
		{
			Span sp = Span(77);
			std::cout << "Size = "<< sp.getSize() << std::endl;
			std::cout << "Max = "<< sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << END << std::endl;
		}
	}
	{
		std::cout << GREEN << "\t<======|TEST_9|======>" << END << std::endl;
		try
		{
			Span sp = Span(3);
			std::cout << "Size = "<< sp.getSize() << std::endl;
			sp.addNumber(INT_MIN);
			std::cout << "1 ";
			sp.addNumber(INT_MAX);
			std::cout << "2 ";
			sp.addNumber(0);
			std::cout << "3 ";
			sp.addNumber(3);
			std::cout << "4 ";
			sp.addNumber(5);
			std::cout << "5 ";
			std::cout << "Min = "<< sp.shortestSpan() << std::endl;
			std::cout << "Max = "<< sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << END << std::endl;
		}
	}
	{
		std::cout << GREEN << "\t<======|TEST_10|======>" << END << std::endl;
		try
		{
			std::cout << GREEN << "\t\t|LIST|" << END << std::endl;
			std::list<int> lst;
			lst.push_back(5);
			//lst.push_back(4);
			lst.push_back(50);
			lst.push_back(1);
			Span sp = Span(3);
			sp.addNumber(lst.begin(), lst.end());
			std::cout << "Size = "<< sp.getSize() << std::endl;
			std::cout << "Min = "<< sp.shortestSpan() << std::endl;
			std::cout << "Max = "<< sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << END << std::endl;
		}
	}
	{
		std::cout << GREEN << "\t<======|TEST_11|======>" << END << std::endl;
		try
		{
			std::cout << GREEN << "\t\t|LIST|" << END << std::endl;
			std::list<int> lst;
			lst.push_back(1);
			lst.push_back(2);
			lst.push_back(3);
			lst.push_back(4);
			lst.push_back(5);
			Span sp = Span(5);
			sp.addNumber(lst.begin(), lst.end());
			std::cout << "Size = "<< sp.getSize() << std::endl;
			std::cout << "Min = "<< sp.shortestSpan() << std::endl;
			std::cout << "Max = "<< sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << END << std::endl;
		}
	}
	{
		std::cout << GREEN << "\t<======|TEST_12|======>" << END << std::endl;
		try
		{
			std::cout << GREEN << "\t\t|LIST|" << END << std::endl;
			std::list<int> lst;
			size_t i = 0;
			Span sp = Span(100000);
			while (lst.size() < 100000)
				lst.push_back(i++);			
			sp.addNumber(lst.begin(), lst.end());
			std::cout << "Size = "<< sp.getSize() << std::endl;
			std::cout << "Min = "<< sp.shortestSpan() << std::endl;
			std::cout << "Max = "<< sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << END << std::endl;
		}
	}
	return (0);
}
