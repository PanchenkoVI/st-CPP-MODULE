/*
* Created: 2021/03/31
*/

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

#define RED		"\033[1;31m"
#define GREEN	"\033[1;32m"
#define END		"\033[0m"

class Bureaucrat
{
	private:
		int _grade;
		const std::string _name;

	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &);		
		Bureaucrat(const std::string &, int );

		Bureaucrat &operator = (const Bureaucrat &);
		virtual ~Bureaucrat();

		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException();
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException();
				virtual const char* what() const throw();
		};

		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		const std::string & getName() const;
};

std::ostream & operator<< (std::ostream &, const Bureaucrat &);

#endif