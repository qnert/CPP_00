/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:04:45 by skunert           #+#    #+#             */
/*   Updated: 2023/11/26 16:07:07 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// void	robotomy_test(void)
// {
// 	try{
// 		Bureaucrat	bob("bob", 44);
// 		RobotomyRequestForm Shrub("bender");

// 		std::cout << std::endl;
// 		Shrub.execute(bob);
// 		system("sleep 1");
// 		Shrub.execute(bob);
// 		system("sleep 1");
// 		Shrub.execute(bob);
// 		system("sleep 1");
// 		Shrub.execute(bob);
// 		system("sleep 1");
// 		bob.executeForm(Shrub);
// 		std::cout << std::endl;
// 	}
// 	catch (std::exception& e)
// 	{
// 		std::cout << e.what();
// 	}
// }

void	shrubbery_test(void)
{
	try{
		Bureaucrat	bob("bob", 44);
		ShrubberyCreationForm Shrub("home");

		std::cout << std::endl;
		Shrub.execute(bob);
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
}

void	presidential_test(void)
{
	try{
		Bureaucrat BOB("bob", 5);
		PresidentialPardonForm P1("The evaluator");

		std::cout << std::endl;
		BOB.executeForm(P1);
		P1.execute(BOB);
		P1.beSigned(BOB);
		P1.beSigned(BOB);
		std::cout << std::endl;
	}
	catch (std::exception& e){
		std::cout << e.what();
	}
}

int main(void)
{
	// robotomy_test();
	shrubbery_test();
	// presidential_test();
	return (0);
}
