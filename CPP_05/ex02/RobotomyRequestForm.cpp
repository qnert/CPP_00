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

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& other)
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
		time_t	now = time(0);
		srand((unsigned) time(&now));
		int	random = rand() % 100;
		if (random > 50)
			std::cout << "Robotomy succesfully done!\n";
		else
			std::cout << "Robotomy did not succeed!\n";
	}
}

