/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:07:07 by skunert           #+#    #+#             */
/*   Updated: 2023/11/24 17:09:01 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = "default";
	std::cout << "PresidentialPardonForm default constructor called.\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
	std::cout << "PresidentialPardonForm param constructor called.\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& other)
{
	*this = other;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& other)
{
	if (this != &other)
	{
		this->_target = other._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor called.\n";
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor)
{
	if (executor.getGrade() > this->getRequirementexec())
		throw GradeTooLowException();
	else{
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox.\n";
	}
}
