/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:59:26 by skunert           #+#    #+#             */
/*   Updated: 2023/11/26 15:23:05 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern default constructor called.\n";
}

Intern::Intern(Intern const& other){
	(void)other;
}

Intern&	Intern::operator=(Intern const& other)
{
	(void)other;
	return (*this);
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called.\n";
}

AForm*	Intern::makeForm(std::string form, std::string target)
{
	int			check = 0;
	std::string	forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	for (int i = 0; i < 3; i++)
	{
		if (form == forms[i])
			check = i + 1;
	}
	switch (check){
		case 1:
			std::cout << "Intern created " << form << std::endl;
			return (new PresidentialPardonForm(target));
			break ;
		case 2:
			std::cout << "Intern created " << form << std::endl;
			return (new RobotomyRequestForm(target));
			break ;
		case 3:
			std::cout << "Intern created " << form << std::endl;
			return (new ShrubberyCreationForm(target));
			break ;
		default:
			std::cout << "Your input wasn't a valid form!\n";
	}
	return (NULL);
}
