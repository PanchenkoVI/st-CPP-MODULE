/*
* Created: 2021/04/05
*/

#ifndef SPAN_HPP
# define SPAN_HPP

#include <algorithm>
#include <list>
#include <vector>
#include <iostream>
#include <iterator>

#define RED		"\033[1;31m"
#define GREEN	"\033[1;32m"
#define END		"\033[0m"

class Span
{
	public:
		Span(unsigned int);
		Span(unsigned int, unsigned int);
		Span(Span const &);
		Span& operator=(Span const &rhs);
		~Span();

		template <typename iterator>
		void			addNumber(iterator start, iterator end)
		{
			size_t i = this->_vt.size() + std::distance(start, end);
			if (i <= this->_len)
				this->_vt.insert(this->_vt.end(), start, end);
			else
				throw Span::EnoughNumbers();
		};

		class EnoughNumbers : public std::exception 
		{
			private:
				virtual const char* what() const throw();
		};
		class NothNumbers: public std::exception 
		{
			private:
				virtual const char* what() const throw();
		};

		class BadNumbers: public std::exception
		{
			private:
				virtual const char* what() const throw();
		};

		unsigned int getSize(void) const;
		unsigned int longestSpan(void) const;
		unsigned int shortestSpan(void) const;
		void addNumber(int);
		void addNumber(int, int);

	private:
		Span();
		std::vector<int> _vt;
		unsigned int _len;
};

#endif
