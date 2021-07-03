/*
* Created: 2021/04/02
*/

#include "Convert.hpp"

Convert::Convert(char * str) {

	this->_stop = 0;
	this->_stop_ind = 0;
	this->_str = str;
	this->_db = 0;
	this->_fl = 0;
	this->_int = 0;
	this->_ch = 0;
	ft_parse(str);
}

Convert::Convert(Convert const & str) {

	this->_stop = str._stop;
	this->_stop_ind = str._stop_ind;
	this->_str = str._str;
	this->_db = str._db;
	this->_fl = str._fl;
	this->_int = str._int;
	this->_ch = str._ch;
}

Convert &Convert::operator=(Convert const & str)
{
	if (this != &str)
	{
		this->_stop = str._stop;
		this->_str = str._str;
		this->_db = str._db;
		this->_fl = str._fl;
		this->_int = str._int;
		this->_ch = str._ch;
		this->_fl = str._fl;
		this->_stop_ind = str._stop_ind;
	}
	return (*this);
}

Convert::~Convert() {
}

int ft_vd2(std::string str)
{
	int i = 0;
	int fl = 0;
	int b = 1;

	if (!str.compare("-inff"))
		return (1);
	else if (!str.compare("+inff"))
		return (1);
	else if (!str.compare("nanf"))
		return (1);
	else if (!str.compare("-inf"))
		return (1);
	else if (!str.compare("+inf"))
		return (1);
	else if (!str.compare("nan"))
		return (1);
	else if (!str.compare("inf"))
		return (1);
	while (str[i])
		i++;
	i--;
	if (i > 0)
		if (str[i] == 'f')
		{
			while (i > 0)
			{
				if (isdigit(str[i]) && str[i] != '.')
					fl = 1;
				if (str[i] == 'f')
					b++;
				if (b != 1)
					return (0);
				i--;
			}
			if (fl == 1)
				return (1);
		}
	return (0);
}

int ft_valid(std::string tt)
{
	int k = 0;

	if (ft_vd2(tt))
		return (1);
	else if (!isdigit(tt[0]))
		if (tt.size() == 1)
			return (1);	
	for (unsigned long i = 0; i < tt.size(); i++)
	{
		if (tt[i] == 'f')
			k++;
		if (k > 1)
			return (0);
		if (tt[0] == '-' || tt[0] == '+')
			continue;
		if (!isdigit(tt[i]) && tt[i] != '.' && tt[i] != 'f')
			return (0);
	}
	return (1);
}

int Convert::ft_crcrl_test(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == '.')
			break ;
		i++;
	}
	return (i);
}

void Convert::ft_parse3(char *str)
{
	int i = ft_crcrl_test(str);
	if ((i > 10 && str[0] != '-') || (i > 11 && str[0] == '-'))
		_stop = 1;
	_db = atof(str);
	if (((i == 10 && str[0] != '-') || (i == 11 && str[0] == '-')) && (_db < -2147483648 || _db > 2147483647))
		_stop_ind = 1;
	_int = static_cast<int>(_db);
	_fl = static_cast<float>(_db);
	_ch = static_cast<char>(_int);
}

void Convert::ft_parse2(char *str)
{
	if (strlen(str) > 1 && _str.find_first_of(".", 0) != std::string::npos)
		ft_parse3(str);
	else if (_str.find("nan", 0) != std::string::npos)
		ft_parse3(str);
	else if (_str.find("inf", 0) != std::string::npos)
		ft_parse3(str);
	else
	{
		if (str[0] == '\0')
			_stop = 2;
		else
		{
			_int = atoi(str);
			_db = atof(str);
			int i = strlen(str);
			if ((i > 10 && str[0] != '-') || (i > 11 && str[0] == '-'))
				_stop = 1;
			if (((i == 10 && str[0] != '-') || (i == 11 && str[0] == '-')) && (_db < -2147483648 || _db > 2147483647))
				_stop_ind = 1;	
			_fl = static_cast<float>(_int);
			_ch = static_cast<char>(_int);
			_db = static_cast<double>(_int);
		}
	}
}

void Convert::ft_parse(char *str)
{
	if (strlen(str) == 1 && (isalpha(str[0]) || str[0] == ' '))
	{
		_ch = str[0];
		_int = static_cast<int>(_ch);
		_fl = static_cast<float>(_int);
		_db = static_cast<double>(_fl);
	}
	else
		ft_parse2(str);
}

void Convert::ft_printFloat(void)
{
	if (_stop == 2)
		std::cout << "float: Non displayable" << std::endl;
	else if (_stop > 0)
		std::cout << "float: impossible" << std::endl;
	else
	{
		std::cout << "float: " << _fl;
		if (!std::isnan(_fl))
			if (!std::isinf(_fl))
				if (!(_fl - static_cast<float>(_int)))
					std::cout << ".0";
		std::cout << "f" << std::endl;
	}
}

void Convert::ft_printDouble(void)
{
	if (_stop == 2)
		std::cout << "double: Non displayable" << std::endl;
	else if (_stop > 0)
		std::cout << "double: impossible" << std::endl;
	else if (!(_db - static_cast<double>(_int)))
		std::cout << "double: " << _db << ".0" << std::endl;
	else
		std::cout << "double: " << _db << std::endl;
}

void Convert::ft_printChar(void)
{
	int b;

	b = -_int;
	if ( std::isnan(_db))
		std::cout << "char: " << "impossible" << std::endl;
	else if (std::isinf(_db))
		std::cout << "char: " << "impossible" << std::endl;
	else if (b > 31 && b < 127)
		std::cout << "char: " << "impossible" << std::endl;
	else if (_int > 31 && _int < 127)
		std::cout << "char: " << "'" << _ch << "'" << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
}

void Convert::ft_printInt(void)
{
	if (_stop == 2)
		std::cout << "int: Non displayable" << std::endl;
	else
	{
		std::cout << "int: ";
		if (_stop > 0 || _stop_ind > 0)
			std::cout << "impossible" << std::endl;
		else if (std::isnan(_db))
			std::cout << "impossible" << std::endl;
		else if (std::isinf(_db))
			std::cout << "impossible" << std::endl;
		else
			std::cout << _int << std::endl;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 2 && ft_valid(argv[1]))
	{
		Convert conv(argv[1]);
		conv.ft_printChar();
		conv.ft_printInt();
		conv.ft_printFloat();
		conv.ft_printDouble();		
	}
	else
		std::cerr << RED << "|ERROR|: INVALID ARGUMENT(S)!" << END << std::endl;
	return (0);
}
