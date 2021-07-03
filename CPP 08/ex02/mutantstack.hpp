/*
* Created: 2021/04/05
*/

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <algorithm>

#define RED		"\033[1;31m"
#define GREEN	"\033[1;32m"
#define END		"\033[0m"

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {};
		~MutantStack() {};
		MutantStack(MutantStack<T> & str) : std::stack<T>(str) {}
		MutantStack & operator=(MutantStack const & str) {

			if ( this != &str )
				std::stack<T>::operator= (str);
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin(void){ return (this->c.begin()); };
		iterator end(void){ return (this->c.end()); };
		const_iterator cbegin(void) const{ return (this->c.cbegin());};
		const_iterator cend(void) const{ return (this->c.cend()); };
		reverse_iterator rbegin(void){ return (this->c.rbegin());};
		reverse_iterator rend(void){ return (this->c.rend()); };
		const_reverse_iterator crbegin(void) const{ return (this->c.crbegin()); };
		const_reverse_iterator crend(void) const{ return (this->c.crend()); };
};

#endif