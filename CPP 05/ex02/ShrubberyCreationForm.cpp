/*
* Created: 2021/03/31
*/

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("default", 145, 137) {

	this->_name = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & name) :
	Form("Shrubbery_form", 145, 137) {

	this->_name = name;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & srt) :
	Form(srt.getName(), srt.getSign(), srt.getExe()) {

	*this = srt;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const & str)
{
	if (this != &str)
		_name = str._name;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & str) const
{

	if (str.getGrade() > getExe() && isSign())
		throw Form::GradeTooLowException();
	else if (isSign())
	{
		std::string			str;
		std::ofstream		of(this->_name);

		str = 	"⢀⣴⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣦⡀\n" "⢸⣿⣿⣿⡈⠙⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⢸⣿⣿⣿⣿⡇\n" "⢸⣿⣿⣿⣇⠄⠄⠈⠛⢿⣿⣿⣿⣿⣿⠟⠄⠄⢸⣿⣿⣿⣿⡇\n" "⢸⣿⣿⣿⣿⣦⠄⠄⠄⠄⠙⣿⣿⣿⡟⠄⠄⠄⢸⣿⣿⣿⣿⡇\n"
					"⢸⣿⣿⣿⣿⣿⣷⣄⠄⠄⠄⠈⠿⣿⡇⠄⠄⠄⣾⣿⣿⣿⣿⡇\n" "⢸⣿⣿⣿⣿⣿⣿⣿⣿⣦⣤⣀⠄⠙⡇⠄⠄⣼⣿⣿⣿⣿⣿⡇\n" "⢸⣿⣿⣿⣿⣿⣿⣿⠟⠋⠁⠄⠄⠄⠄⠄⢺⣿⣿⣿⣿⣿⣿⡇\n" "⢸⣿⣿⣿⣿⣿⡿⠁⠄⠿⠗⠄⠄⠄⠄⠄⠄⢿⣿⣿⣿⣿⣿⡇\n"
					"⢸⣿⣿⣿⣿⣿⣇⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢸⣿⣿⣿⣿⣿⡇\n" "⢸⣿⣿⣿⣿⣿⣿⣦⣀⡀⠄⠄⠄⠄⠄⠄⠄⣾⣿⣿⣿⣿⣿⡇\n" "⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⣀⣤⠄⣀⣤⣶⣿⣿⣿⣿⣿⣿⡇\n" "⢸⣿⣿⣿⣿⣿⣿⣿⣇⢈⣉⠁⣿⣋⣥⣤⣾⣿⣿⣿⣿⣿⣿⡇\n"
					"⠈⠻⠿⠿⠿⠿⠿⠿⠿⠿⠿⠷⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠃\n";

		of << str;
		of.close();
		std::cout << GREEN << "|S.C.FORM|SUCCESS| FILE : <" << this->_name << "> created!\n" << END;	
	}
	else
		std::cout << RED << "|S.C.FORM|ERROR| FORM <" << getName() << "> <UNSIGNED>\n" << END;
}
