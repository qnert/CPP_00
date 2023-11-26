/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:01:49 by skunert           #+#    #+#             */
/*   Updated: 2023/11/22 10:20:08 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//class constructor/deconstructor and operator funcs
AForm::AForm(void): _name("default"), _required_grade_sign(150), _required_grade_exec(150)
{
	std::cout << "AForm default constructor called.\n";
	this->_is_signed = false;
}

AForm::AForm(std::string name, int req_sign, int req_exec): _name(name), _required_grade_sign(req_sign), _required_grade_exec(req_exec)
{
	this->_is_signed = false;
	if (this->_required_grade_exec > 150 || this->_required_grade_sign > 150)
		throw(GradeTooLowException());
	else if (this->_required_grade_exec < 1 || this->_required_grade_sign < 1)
		throw(GradeTooHighException());
	std::cout << "AForm param constructor called.\n";
}

AForm::AForm(AForm const& other):
_name(other.getName()), _is_signed(other.getSignedstatus())
, _required_grade_sign(other.getRequirementsign()), _required_grade_exec(other.getRequirementexec())
{}

AForm&	AForm::operator=(AForm const& other)
{
	if (this != &other)
		this->_is_signed = other._is_signed;
	return (*this);
}

AForm::~AForm(void){
	std::cout << "AForm default destructor called.\n";
}

//member functions
std::string	AForm::getName(void) const{
	return (this->_name);
}

bool	AForm::getSignedstatus(void) const{
	return (this->_is_signed);
}

int	AForm::getRequirementsign(void) const{
	return (this->_required_grade_sign);
}

int	AForm::getRequirementexec(void) const{
	return (this->_required_grade_exec);
}

void	AForm::beSigned(Bureaucrat& other){
	if (this->getSignedstatus() == true){
		std::cout << "AForm " << this->getName() << " is already signed.\n";
		return ;
	}
	if (this->getRequirementsign() >= other.getGrade())
	{
		std::cout << "Bureaucrat " << other.getName() << " signed " << this->getName() << std::endl;
		this->_is_signed = true;
	}
	else
	{
		std::cout << "Bureaucrat " << other.getName() << " couldn't sign AForm " << this->getName() << " because of too low grade!\n";
		throw (GradeTooLowException());
	}
}

//exceptions funcs
const char*	AForm::GradeTooHighException::what() const throw(){
	return ("Grade too high!\n");
}

const char*	AForm::GradeTooLowException::what() const throw(){
	return ("Grade too low!\n");
}

//ostream operator func
std::ostream&	operator<<(std::ostream& os, AForm const& other){
	os << "AForm with the name " << other.getName() << " with signing status " << std::boolalpha
		<< other.getSignedstatus() << " has the required grade " << other.getRequirementsign()
		<< " for signing and the required grade " << other.getRequirementexec() << " for execution.\n";
	return (os);
}
