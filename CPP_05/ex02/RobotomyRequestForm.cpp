/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:49:19 by skunert           #+#    #+#             */
/*   Updated: 2023/11/24 16:08:33 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = "default";
	std::cout << "RobotomyRequestForm default constructor called.\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
	std::cout << "RobotomyRequestForm param constructor called.\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& other): AForm(other)
{
	*this = other;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& other)
{
	if (this != &other)
	{
		this->_target = other._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called.\n";
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor)
{
	if (executor.getGrade() > this->getRequirementexec())
		throw GradeTooLowException();
	else{
		std::cout << "* drilling noise * \n";
		std::srand(static_cast<unsigned int>(std::time(0)));
		int n = std::rand() % 4;
		if (n > 1)
			std::cout << this->getName() << " executed by " << executor.getName() << " on " << this->_target << " with great success." << std::endl;
		else
			std::cout << executor.getName() << " executed a " << this->getName() << " on " << this->_target << " without success!\n";
	}
}

