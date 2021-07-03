/*
* Created: 2021/03/24
*/

#include <iostream>

int main(int argc, char **arg)
{
	int i;
	int j;
	int len;

	if (argc > 0 && argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		i = 1;		
		while (i < argc)
		{
			std::string argv(arg[i]);
			j = 0;
			if (i > 1 && argv[j] == ' ')
				while (argv[j] == ' ')
					j++;	
			if (i > 1 && argv[j] != ' ')
				std::cout << " ";
			len = 0;
			while (argv[len] != '\0')
				len++;
			len--;
			while(argv[len] == ' ')
				len--;
			while (argv[j] && j <= len)
			{
				if (argv[j] >= 'a' && argv[j] <= 'z')
					std::cout << (char)(argv[j] - 32);
				else
					std::cout << argv[j];
				j++;
			}
			i++;
		}
	std::cout << std::endl;
	}
	return 0;
}
