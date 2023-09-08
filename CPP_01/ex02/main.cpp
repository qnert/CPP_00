/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:46:46 by skunert           #+#    #+#             */
/*   Updated: 2023/09/08 11:53:11 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str("HI THIS IS BRAIN");
	std::string *stringPTR = &str;
	std::string	stringREF = *stringPTR;

	std::cout << "Adresses: " << std::endl;
	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &(*stringPTR) << std::endl;

	std::cout << "Values: " << std::endl;
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return (0);
}