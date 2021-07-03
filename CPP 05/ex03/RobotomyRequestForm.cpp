/*
* Created: 2021/03/31
*/

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("default", 72, 45) {
	
	this->_name = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & name) : Form("robotomy", 72, 45) {

	this->_name = name;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & str) :
	Form(str.getName(), str.getSign(), str.getExe()) {

	*this = str;
}

RobotomyRequestForm &RobotomyRequestForm::operator= (RobotomyRequestForm const & str) {

	if (this != &str)
		_name = str._name;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & str) const {

	if (!isSign())
	{
		std::cout << RED << "|R.R.FORM|ERROR| FORM <" << getName() << "> <UNSIGNED>!\n" << END;
		return;
	}
	else
	{
		if (str.getGrade() > getExe())
		{
			std::cout << RED << "|R.R.FORM|ERROR| EXECUTE------>FAILURE\n" << END;
			throw Form::GradeTooLowException();
		}
		std::cout << GREEN << "|R.R.FORM|SUCCESS| E-ron-don-don... <" << this->_name <<
			"> has been robotomized successfully 50% of the time.\n" << END;	
	}
}