/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:04:45 by skunert           #+#    #+#             */
/*   Updated: 2023/11/21 17:57:20 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	working_structure(void)
{
	try{
		Bureaucrat Simon("Simon", 149);
		std::cout << Simon;
		Simon.decreaseGrade();
		std::cout << Simon;
		for (int i = 0; i < 149; i++)
			Simon.increaseGrade();
		std::cout << Simon;
	}
	catch (std::exception& e){
		std::cerr << "Exception caught!\n";
	}
}

void	false_grade_decrease(void)
{
	try{
		Bureaucrat Simon("Simon", 150);
		std::cout << Simon;
		Simon.decreaseGrade();
	}
	catch (std::exception& e){
		std::cerr << "Exception caught!\n";
	}
}

void	false_grade_increase(void)
{
	try{
		Bureaucrat Simon("Simon", 1);
		std::cout << Simon;
		Simon.increaseGrade();
	}
	catch (std::exception& e){
		std::cerr << "Exception caught!\n";
	}
}

int main(void)
{
	std::cout << UBLU << "False constructor and deconstructor: \n" << RESET;
	try{
		Bureaucrat Peter("Peter", 151);
	}
	catch (std::exception& e){
		std::cerr << "Exception caught!\n";
	}
	try{
		Bureaucrat Klaus("Klaus", -9);
	}
	catch (std::exception& e){
		std::cerr << "Exception caught!\n";
	}
	std::cout << std::endl;
	std::cout << GREEN << "Working use: \n" << RESET;
	working_structure();
	std::cout << std::endl;
	std::cout << MAGENTA << "False decrease use: \n" << RESET;
	false_grade_decrease();
	std::cout << std::endl;
	std::cout << BHCYN << "False increase use: \n" << RESET;
	false_grade_increase();
}