/*
* Created: 2021/03/31
*/

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("default", 25, 5) {

	this->_name = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & name) : Form("presidential", 25, 5) {

	this->_name = name;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & str) :
	Form(str.getName(), str.getSign(), str.getExe()) {

	*this = str;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

void PresidentialPardonForm::execute(const Bureaucrat &str) const
{
	if (!isSign())
	{
		std::cout << RED << "|P.P.FORM|ERROR| FORM <" << getName() << "> <UNSIGNED>!\n" << END;
		return;
	}
	if (str.getGrade() > getExe())
		throw Form::GradeTooLowException();
	std::cout << GREEN << "|P.P.FORM|SUCCESS| <" << this->_name << "> has been pardoned by Zafod Beeblebrox.\n" << END;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & str)
{
	if (this != &str)
		_name = str._name;
	return (*this);
}