/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:04:45 by skunert           #+#    #+#             */
/*   Updated: 2023/11/24 17:00:41 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

void	robotomy_chances(void)
{
	try{
		Bureaucrat	bob("bob", 44);
		RobotomyRequestForm Shrub("bender");

		std::cout << std::endl;
		Shrub.execute(bob);
		system("sleep 1");
		Shrub.execute(bob);
		system("sleep 1");
		Shrub.execute(bob);
		system("sleep 1");
		Shrub.execute(bob);
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
}
int main(void)
{
	robotomy_chances();
}
