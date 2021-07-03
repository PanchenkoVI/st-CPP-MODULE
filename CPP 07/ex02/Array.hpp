/*
* Created: 2021/04/03
*/

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

#define RED		"\033[1;31m"
#define GREEN	"\033[1;32m"
#define END		"\033[0m"

template <typename T>
class Array
{
	private:
		T *_arr;
		unsigned int _len;

	public:
		Array(void) : _arr(NULL), _len(0) {}
		Array(unsigned int n) {

			if (n == 0)
				throw -1;
			this->_len = n;
			this->_arr = new T[n]();
		}
		Array <T> &operator= (Array <T> const &str) {

			unsigned int i = 0;
			this->_len = str._len;
			this->_arr = new T[str._len];
			while (i < this->_len)
			{
				this->_arr[i] = str._arr[i];
				i++;
			}
			return (*this);
		}
		~Array(void) {

			delete [] (this->_arr);
		}
		Array(Array<T> const & str) {

			unsigned int i = 0;
			this->_len = str._len;
			this->_arr = new T[str._len];
			while (i < this->_len)
			{
				this->_arr[i] = str._arr[i];
				i++;
			}
		}
		T & operator[](unsigned int i) {

			if (i < this->_len)
				return (this->_arr[i]);
			else
				throw -1;
		}
		unsigned int size(void) const {

			return (this->_len);
		}
};

#endif