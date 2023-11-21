/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:04:45 by skunert           #+#    #+#             */
/*   Updated: 2023/11/21 15:02:13 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try{
		Bureaucrat Simon("Simon", 149);
		std::cout << Simon;
		Simon.decreaseGrade();
		std::cout << Simon;
	}
	catch (std::exception& e){
		std::cerr << "Exception caught!\n";
	}
}