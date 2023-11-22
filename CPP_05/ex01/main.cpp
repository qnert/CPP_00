/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:04:45 by skunert           #+#    #+#             */
/*   Updated: 2023/11/22 10:21:29 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try{
		Form 		F1("FBI", 45, 10);
		Bureaucrat	Thorben("Thorben", 5);
		Bureaucrat	Louis("Louis", 50);

		std::cout << std::endl;
		std::cout << Thorben;
		std::cout << Louis;
		std::cout << F1;
		std::cout << std::endl;
		F1.beSigned(Thorben);
		Thorben.signForm(F1);
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
}