/*
* Created: 2021/03/31
*/

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

#define RED		"\033[1;31m"
#define GREEN	"\033[1;32m"
#define END		"\033[0m"

class Form;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;

	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &);
		Bureaucrat(const std::string &, int );
		Bureaucrat &operator = (const Bureaucrat &);
		virtual ~Bureaucrat();		

		class GradeTooLowException : public std::exception
		{
		public:
			GradeTooLowException();
			virtual const char* what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
		public:
			GradeTooHighException();
			virtual const char* what() const throw();
		};

		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		const std::string & getName() const;

		void signForm(Form *);
};

std::ostream &operator<< (std::ostream &, const Bureaucrat &);

#endif
