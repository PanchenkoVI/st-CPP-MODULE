/*
* Created: 2021/04/03
*/

#include "Array.hpp"

int		main(void)
{
	{
		Array <int>a(15);
		a[7] = 21;
		std::cout << a[7] << std::endl;
		std::cout << "#======>" << std::endl;		
		Array <int> b(a);
		b[7] = 42;
		std::cout << a[7] << std::endl;
		std::cout << b[7] << std::endl;
		std::cout << "#======>" << std::endl;
		Array <int> c(b);
		c[7] = 100;
		std::cout << a[7] << std::endl;
		std::cout << b[7] << std::endl;
		std::cout << c[7] << std::endl;
		std::cout << c[8] << std::endl;
		std::cout << "#================>\n" << std::endl;
	}
	{
		Array <std::string> a(15);
		a[6] = "AAA";
		std::cout << a[6] << std::endl;
		std::cout << "#======>" << std::endl;
		Array <std::string> b(a);
		b[6] = "BBB";
		std::cout << a[6] << std::endl;
		std::cout << b[6] << std::endl;
		std::cout << "#======>" << std::endl;
		Array <std::string> c(b);
		c[6] = "CCC";
		std::cout << a[6] << std::endl;
		std::cout << b[6] << std::endl;
		std::cout << c[6] << std::endl;
	}
	{
		std::cout << "#===========> INT" << std::endl;
		Array<int> int1;
		Array<int> int2(7);

		int1 = int2;
		size_t i = 0;		
		while (i < int1.size())
		{
			int1[i] = i;
			std::cout << int1[i] << " ";
			i++;
		}
		std::cout << std::endl;
		i = 0;
		while (i < int2.size())
		{
			std::cout << int2[i] << " ";
			i++;
		}
		std::cout << std::endl;
		i = 0;
		try
		{
			int *a = new int();
			std::cout << "Test from sbj (int *a = new int()) ~ " << *a << std::endl;
			delete a;
			Array<int> int3(0);
			while (i < int3.size())
			{
				std::cout << int3[i] << " ";
				i++;
			}
			std::cout << std::endl;	
		}
		catch(int)
		{
			std::cout << RED << "|ERROR| INVALID SIZE" << END << std::endl;
		}
		std::cout << "#===========> FLOAT" << std::endl;
		Array<float> floatR (10); 
		i = 0;
		while (i < floatR.size())
		{
			std::cout << floatR[i] << "f ";
			i++;
		}
		std::cout << std::endl;
		std::cout << "#===========> STRIMG" << std::endl;
		Array<std::string> stringR (3);
		i = 0;
		while (i < stringR.size())
		{
			stringR[i] = std::to_string(i);
			std::cout << stringR[i] << "s ";
			i++;
		}
		std::cout << std::endl;
		Array<std::string> stringRR = stringR;
		i = 0;
		while (i < 3)
		{
			stringRR[i] = "42";
			i++;			
		}
		i = 0;
		while (i < stringR.size())
		{
			std::cout << stringR[i] << "s <>" << stringRR[i] << std::endl;
			i++;
		}
		std::cout << "#================> (try-catch)" << std::endl;

		try
		{
			int2[-1] = 2;
		}
		catch(int)
		{
			std::cout << RED << "|ERROR| INVALID SIZE" << END << std::endl;
		}
		
		try
		{
			int2[999999999] = 2;
		}
		catch(int)
		{
			std::cout << RED << "|ERROR| INVALID SIZE" << END << std::endl;
		}

		try
		{
			int2[-99999999] = 2;
		}
		catch(int)
		{
			std::cout << RED << "|ERROR| INVALID SIZE" << END << std::endl;
		}

		try
		{
			int2[42] = 2;
		}
		catch(int)
		{
			std::cout << RED << "|ERROR| INVALID SIZE" << END << std::endl;
		}

		try
		{
			int2[21] = 2;
		}
		catch(int)
		{
			std::cout << RED << "|ERROR| INVALID SIZE" << END << std::endl;
		}
	}
	
	return (0);
}