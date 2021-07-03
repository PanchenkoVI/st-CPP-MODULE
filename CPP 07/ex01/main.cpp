
#include "iter.hpp"

int		main(void)
{
	{
		std::cout << "#=========================> TEST_1" << std::endl;
		int tab[] = { 0, 1, 2, 3, 4 };
		Awesome tab2[5];
		::iter( tab, 5, print ); 
		::iter( tab2, 5, print );
	}
	{
		std::cout << "#=========================> TEST_2" << std::endl;
		int arr[10] = { 0, 1, 2, 3, 4, 5, 6 ,7 ,8, 9 };
		std::string str[] = {"abc", "def", "ghi", "uio", "mlh", "qaz"};
		std::cout << "#=========================> print" << std::endl;
		::iter(arr, 5, print);
		std::cout << std::endl;
		::iter(arr, 10, print);
		std::cout << std::endl;
		std::cout << "#=====> str" << std::endl;
		::iter(str, 2, print);
		std::cout << std::endl;
		::iter(str, 4, print);
		std::cout << std::endl;
		::iter(str, 6, print);
		std::cout << std::endl;

		std::cout << "#=========================> increment" << std::endl;
		::iter(arr, 5, increment);
		std::cout << std::endl;

		::iter(arr, 10, increment);
		std::cout << std::endl;

		std::cout << "#=========================> decrement" << std::endl;
		::iter(arr, 5, decrement);
		std::cout << std::endl;

		::iter(arr, 10, decrement);
		std::cout << std::endl;

		std::cout << "#=========================> squared" << std::endl;
		::iter(arr, 5, squared);
		std::cout << std::endl;

		::iter(arr, 10, squared);
		std::cout << std::endl;
	}
	return (0);
}