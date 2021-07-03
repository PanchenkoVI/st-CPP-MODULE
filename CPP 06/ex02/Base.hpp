/*
* Created: 2021/04/02
*/

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdlib>

#define RED		"\033[1;31m"
#define GREEN	"\033[1;32m"
#define END		"\033[0m"

class Base
{
	public:
		virtual ~Base();
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base *generate();
void identify_from_pointer(Base *p);
void identify_from_reference(Base &p);

#endif