/*
* Created: 2021/03/31
*/

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("non") {

	this->_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name) {

	this->_grade = grade;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {

	std::cout << "Goodbye " << this->_name << "!" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & str) {

	*this = str;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat & str) {

	if (this != &str)
		_grade = str._grade;
	return (*this);
}

const std::string & Bureaucrat::getName() const {

	return (this->_name);
}

int Bureaucrat::getGrade() const {

	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	this->_grade -= 1;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	this->_grade = this->_grade + 1;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream & operator<< (std::ostream &ost, const Bureaucrat &strB)
{
	ost << GREEN << "Bureaucrat: <" << strB.getName() 
		<< ">, grade <" << strB.getGrade() << ">." << END;
	return (ost);
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {

	return ("|ERROR| GRADE------->HIGH!");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {

	return ("|ERROR| GRADE-------->LOW!");
}
