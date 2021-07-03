/*
* Created: 2021/03/31
*/

#include "Form.hpp"

Form::Form() : _name("non") {

	this->_sign = false;
	this->_min_sign = 150;
	this->_min_exe = 150;
}

Form::Form(const std::string &name, const int minGrSign, const int minGrExe) {

	this->_name = name;
	this->_sign = false;
	this->_min_sign = minGrSign;
	this->_min_exe = minGrExe;
	if (_min_sign < 1)
		throw Form::GradeTooHighException();
	else if (_min_exe < 1)
		throw Form::GradeTooHighException();
	if (_min_sign > 150)
		throw Form::GradeTooLowException();
	else if (_min_exe > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &str) {

	this->_name = str._name;
	this->_sign = str._sign;
	this->_min_sign = str._min_sign;
	this->_min_exe = str._min_exe;
}

Form::~Form() {
}

Form & Form::operator= (const Form &str) {

	if (this != &str)
		this->_sign = str._sign;
	return (*this);
}

const std::string &Form::getName() const {

	return (this->_name);
}

bool Form::isSign() const {

	return (this->_sign);
}

int Form::getSign() const {

	return (this->_min_sign);
}

int Form::getExe() const {

	return (this->_min_exe);
}

void Form::beSigned(Bureaucrat *bur) {

	int bur_grade;
	
	bur_grade = bur->getGrade();
	if (bur_grade > _min_sign)
		throw GradeTooLowException();	
	else 
	{
		_sign = true;
		std::cout << "BUREAUCRAT <" << bur->getName() << "> signed the FORM of <" << _name << ">.\n";
	}
}

void Form::setSign(bool sign) {

	Form::_sign = sign;
}

std::ostream & operator<< (std::ostream &os, const Form &form) {

	std::string	status;
	if (form.isSign())
		status = "<SIGNED>";
	else
		status = "<UNSIGNED>";
	os << "\nFORM: <" << form.getName() << "> | STATUS " << status <<
		" |\nA grade required to sign it <" << form.getSign() << "> and a grade required to execute it <" << form.getExe() << ">.\n";
	return os;
}

Form::GradeTooHighException::GradeTooHighException() {
}

const char *Form::GradeTooHighException::what() const throw() {

	return ("|ERROR| FORM----->HIGH");
}

Form::GradeTooLowException::GradeTooLowException() {
}

const char *Form::GradeTooLowException::what() const throw() {

	return ("|ERROR| FORM------>LOW");
}
