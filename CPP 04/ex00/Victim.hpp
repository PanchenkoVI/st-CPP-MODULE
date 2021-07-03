/*
* Created: 2021/03/30
*/

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <string>

# define BLUE		"\033[1;34m"
# define FIO		"\033[1;35m"
# define RED		"\033[1;31m"
# define GREEN		"\033[1;32m"
# define END		"\033[0m"

class Victim
{
	Victim();
	protected:
		std::string _name;

	public:
		Victim(std::string const & n);
		Victim(Victim const & line);
		virtual ~Victim();

		Victim &operator= (Victim const & str);

		std::string getName() const;
		virtual void getPolymorphed() const; 
};

std::ostream & operator<< (std::ostream &om, Victim const & src);

#endif
