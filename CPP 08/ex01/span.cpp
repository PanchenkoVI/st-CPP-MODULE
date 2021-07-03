/*
* Created: 2021/04/05
*/

#include "span.hpp"

Span::Span(unsigned int	n) {

	this->_len = n;
}

Span::Span(Span const & str) {

	this->_len = str.getSize();
	*this = str;
}

Span & Span::operator= (Span const & str)
{
	if (this == &str)
		return(*this);
	else
	{
		size_t i = 0;
		if (str.getSize() < this->_len)
		{
			while (i < str._vt.size())
			{
				this->addNumber(str._vt[i]);
				i++;
			}
			return (*this);				
		}
		else
			throw Span::EnoughNumbers();
	}
}

Span::~Span(void) {
}

unsigned int Span::shortestSpan(void) const {

	std::vector<int> srt(this->_vt);
	int small = 2147483647;
	size_t i = 1;

	if (this->_vt.size() <= 1)
		throw Span::NothNumbers();
	if (this->_len <= 1)
		throw Span::NothNumbers();
	// for(size_t j = 0; j < srt.size(); j++)
	// 	std::cout << RED << srt[j] << " " << END;
	std::sort(srt.begin(), srt.end());
	while (i < srt.size())
	{
		if (std::abs(srt[i] - srt[i - 1]) > small)
			i++;
		else
		{
			small = std::abs(srt[i] - srt[i - 1]);
			i++;
		}
	}
	return (small);
}

unsigned int Span::getSize(void) const {

	return (this->_len);
}

void Span::addNumber(int i) {

	if (this->_len != this->_vt.size())
		this->_vt.push_back(i);
	else
		throw Span::EnoughNumbers();

}

void Span::addNumber(int i, int j) {

	if (i == j)
		throw BadNumbers();
	while (i <= j)
	{
		addNumber(i);
		i++;
	}
}

unsigned int Span::longestSpan(void) const {

	if (this->_len <= 1)
		throw Span::NothNumbers();
	if (this->_vt.size() <= 1)
		throw Span::NothNumbers();
	int min = *std::min_element(this->_vt.begin(), this->_vt.end());
	int max = *std::max_element(this->_vt.begin(), this->_vt.end());
	max = max - min;
	return (max);
}

const char* Span::NothNumbers::what() const throw() {

	const char *st = "|ERROR| : NOT NUMBERS"; 
	return (st);
}

const char* Span::EnoughNumbers::what() const throw() {

	const char *st = "|ERROR| : ENOUGH NUMBERS"; 
	return (st);
}

const char* Span::BadNumbers::what() const throw() {

	const char *st = "|ERROR| : BAD NUMBERS"; 
	return (st);
}