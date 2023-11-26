/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:01:49 by skunert           #+#    #+#             */
/*   Updated: 2023/11/26 15:59:53 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//class constructor/deconstructor and operator funcs
Form::Form(void): _name("default"), _required_grade_sign(150), _required_grade_exec(150)
{
	std::cout << "Form default constructor called.\n";
	this->_is_signed = false;
}

Form::Form(std::string name, int req_sign, int req_exec): _name(name), _required_grade_sign(req_sign), _required_grade_exec(req_exec)
{
	this->_is_signed = false;
	if (this->_required_grade_exec > 150 || this->_required_grade_sign > 150)
		throw(GradeTooLowException());
	else if (this->_required_grade_exec < 1 || this->_required_grade_sign < 1)
		throw(GradeTooHighException());
	std::cout << "Form param constructor called.\n";
}

Form::Form(Form const& other):
_name(other.getName()), _is_signed(other.getSignedstatus())
, _required_grade_sign(other.getRequirementsign()), _required_grade_exec(other.getRequirementexec())
{}

Form&	Form::operator=(Form const& other)
{
	if (this != &other)
		this->_is_signed = other._is_signed;
	return (*this);
}

Form::~Form(void){
	std::cout << "Form default destructor called.\n";
}

//member functions
std::string	Form::getName(void) const{
	return (this->_name);
}

bool	Form::getSignedstatus(void) const{
	return (this->_is_signed);
}

int	Form::getRequirementsign(void) const{
	return (this->_required_grade_sign);
}

int	Form::getRequirementexec(void) const{
	return (this->_required_grade_exec);
}

void	Form::beSigned(Bureaucrat& other){
	if (this->getSignedstatus() == true){
		std::cout << "Form " << this->getName() << " is already signed.\n";
		return ;
	}
	if (this->getRequirementsign() >= other.getGrade())
	{
		std::cout << "Bureaucrat " << other.getName() << " signed " << this->getName() << std::endl;
		this->_is_signed = true;
	}
	else
	{
		std::cout << "Bureaucrat " << other.getName() << " couldn't sign Form " << this->getName() << " because of too low grade!\n";
		throw (GradeTooLowException());
	}
}

//exceptions funcs
const char*	Form::GradeTooHighException::what() const throw(){
	return ("Grade too high!\n");
}

const char*	Form::GradeTooLowException::what() const throw(){
	return ("Grade too low!\n");
}

//ostream operator func
std::ostream&	operator<<(std::ostream& os, Form const& other){
	os << "Form with the name " << other.getName() << " with signing status " << std::boolalpha
		<< other.getSignedstatus() << " has the required grade " << other.getRequirementsign()
		<< " for signing and the required grade " << other.getRequirementexec() << " for execution.\n";
	return (os);
}
