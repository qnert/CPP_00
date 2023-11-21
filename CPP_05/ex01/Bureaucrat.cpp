/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:31:36 by skunert           #+#    #+#             */
/*   Updated: 2023/11/21 21:59:11 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//default constructor/deconstructor and operator functions
Bureaucrat::Bureaucrat(void): _name("Mr. X")
{
	std::cout << "Bureaucrat default constructor called.\n";
	this->_grade = 150;
};

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade >= 1 && grade <= 150)
		this->_grade = grade;
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		throw (Bureaucrat::GradeTooHighException());
	std::cout << "Bureaucrat default constructor called.\n";
};

Bureaucrat::Bureaucrat(Bureaucrat const& other)
{
	*this = other;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat default deconstructor called.\n";
}

//member functions
std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::increaseGrade(void)
{
	if (this->_grade == 1)
		throw(Bureaucrat::GradeTooHighException());
	else
		this->_grade--;
}

void	Bureaucrat::decreaseGrade(void)
{
	if (this->_grade == 150)
		throw(Bureaucrat::GradeTooLowException());
	else
		this->_grade++;
}

void	Bureaucrat::signForm(Form& other)
{
	if (other.getSignedstatus() == true){
		std::cout << "Form " << other.getName() << " is already signed.\n";
		return ;
	}
	if (this->_grade <= other.getRequirementsign())
		std::cout << "Bureaucrat " << this->getName() << " signed " << other.getName() << std::endl;
	else
		std::cout << "Bureaucrat " << this->getName() << " couldn't sign Form " << other.getName() << " because of too low grade!\n";
	other.beSigned(*this);
}

//exception functions
const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!\n");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!\n");
}

//ostream operator
std::ostream&	operator<<(std::ostream& os, Bureaucrat& other)
{
	os << "Bureaucrat named " << other.getName() << " with grade " << other.getGrade() << "!\n";
	return (os);
}