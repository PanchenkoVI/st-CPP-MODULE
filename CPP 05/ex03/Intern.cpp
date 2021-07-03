/*
* Created: 2021/03/31
*/

#include "Intern.hpp"

Intern::Intern() {
}

Intern::Intern(const Intern & str) {

	(void)str;
	return ;
}

Intern::~Intern() {
}

Intern & Intern::operator=(const Intern & str) {

	(void) str;
	return *this;
}

Form *makeFormPresidential(const std::string & str) {


	return (new PresidentialPardonForm( str));
}

Form *makeFormRobotomy(const std::string & str)
{
	return (new RobotomyRequestForm(str));
}

Form *makeFormShrubbery(const std::string & str)
{
	return (new ShrubberyCreationForm(str));
}

Form *Intern::ft_test(const std::string & name, const std::string & str, int i, int *flag, Form	*ret)
{
	std::string		classes[3] = {"robotomy", "presidential", "shrubbery"};
	if (name == classes[i])
	{
		typedef Form* (*makeFormAny)(const std::string & str);
		makeFormAny		myMakeFormAny[3] = {makeFormRobotomy, makeFormPresidential, makeFormShrubbery};
		ret = myMakeFormAny[i](str);
		*flag = 1;
	}
	return (ret);
}

Form *Intern::makeForm(const std::string & name, const std::string & str)
{
	Form	*ret;
	int		flag = 0;
	int		i = 0;
	
	while (i < 3)
	{
		ret = ft_test(name, str, i, &flag, ret);
		i++;
	}
	(flag == 0) ? throw WrongNameOfTypeForm() : 0;
	std::cout << GREEN << "|SUCCESS| Intern creates <" << ret->getName() << ">." << END << std::endl;
	return (ret);
}

Intern::WrongNameOfTypeForm::WrongNameOfTypeForm() {
}

const char *Intern::WrongNameOfTypeForm::what() const throw() {

	return ("|ERROR : Intern| I don't know that... (х_х)");
}
