/*
* Created: 2021/04/02
*/

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <cmath>
#include <sstream>
#include <cstdlib>
#include <string>

#define RED		"\033[1;31m"
#define GREEN	"\033[1;32m"
#define END		"\033[0m"

class Convert
{
	private:
		Convert();
		std::string _str;
		double _db;
		float _fl;
		int _int;
		char _ch;

		int _stop_ind;
		int _stop;
		void ft_parse(char *);
		int ft_vd2(std::string);
		int ft_valid(std::string);
		void ft_parse2(char *);
		void ft_parse3(char *);
		int ft_crcrl_test(char *);

	public:
		Convert(char *);
		Convert(Convert const &);
		~Convert();

		Convert &operator= (Convert const &);

		void ft_printDouble(void);
		void ft_printFloat(void);
		void ft_printInt(void);
		void ft_printChar(void);
};

#endif