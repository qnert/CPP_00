/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:04:45 by skunert           #+#    #+#             */
/*   Updated: 2023/11/26 16:15:47 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	shrubbery(void)
{
	try{
		Intern		Pete;
		AForm*		new_form;
		Bureaucrat	Tom("Tom", 10);

		new_form = Pete.makeForm("shrubbery creation", "nirvana");
		if (!new_form)
			return ;
		Tom.executeForm(*new_form);
		delete (new_form);
	}
	catch (std::exception& e){
		std::cout << e.what();
	}
}

void	presidential(void)
{
	try{
		Intern		Pete;
		AForm*		new_form;
		Bureaucrat	Tom("Tom", 5);

		new_form = Pete.makeForm("presidential pardon", "nirvana");
		if (!new_form)
			return ;
		Tom.executeForm(*new_form);
		delete (new_form);
	}
	catch (std::exception& e){
		std::cout << e.what();
	}
}

void	robotomy(void)
{
	try{
		Intern		Pete;
		AForm*		new_form;
		Bureaucrat	Tom("Tom", 10);

		new_form = Pete.makeForm("robotomy request", "nirvana");
		if (!new_form)
			return ;
		Tom.executeForm(*new_form);
		delete (new_form);
	}
	catch (std::exception& e){
		std::cout << e.what();
	}
}

void	failure(void)
{
	try{
		Intern		Pete;
		AForm*		new_form;
		Bureaucrat	Tom("Tom", 10);

		new_form = Pete.makeForm("notexisting", "nirvana");
		if (!new_form)
			return ;
		Tom.executeForm(*new_form);
		delete (new_form);
	}
	catch (std::exception& e){
		std::cout << e.what();
	}
}


int main(void)
{
	// shrubbery();
	// presidential();
	// robotomy();
	failure();
	return (0);
}
