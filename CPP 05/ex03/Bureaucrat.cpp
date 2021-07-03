/*
* Created: 2021/03/31
*/

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name ("non") {

	this->_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) {

	this->_name = name;
	this->_grade = grade;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {
}

const std::string &Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &str)
{
	*this = str;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat & str) {

	if (this != &str)
		_grade = str._grade;
	return (*this);
}

void Bureaucrat::incrementGrade()
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form *form)
{
	if (this->_grade > form->getSign() && !form->isSign())
		std::cout << RED << "|FAIL| BUREAUCRAT <" << _name << "> cannot sign <" 
			<< form->getName() << "> because bad grade.\n" << END;	
	else if (form->isSign())
		std::cout << RED << "|FAIL| FORM <" << form->getName() << "> signed!\n" << END;
	else if (this->_grade <= form->getSign() && !form->isSign())
	{
		form->setSign(true);
		std::cout << GREEN << "|SUCCESS| BUREAUCRAT <" << this->_name << "> signed <"
			<< form->getName() << ">.\n" << END;
	}
}

std::ostream & operator<< (std::ostream &ost, const Bureaucrat &line) {

	ost << GREEN << "BUREAUCRAT: <" << line.getName() << "> | grade <"
		<< line.getGrade() << ">." << END;
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

void Bureaucrat::executeForm(const Form & form)
{
	if (!form.isSign())
		std::cout << RED << "BUREAUCRAT <" << this->_name << "> can't execute <" 
			<< form.getName() << "> because  <UNSIGNED>." << END << std::endl;
	if (getGrade() > form.getExe())
		throw GradeTooLowException();
	form.execute(*this);
}