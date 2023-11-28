/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:32:46 by skunert           #+#    #+#             */
/*   Updated: 2023/11/28 16:49:56 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	increase(int& nb)
{
	nb++;
}

void	add_not_prefix(std::string& str)
{
	str = "not_" + str;
}

int	main(void)
{
	int	int_len = 9;
	float float_len = 3.0f;
	int int_arr[9] = {1,2,3,4,5,6,7,8,9};
	std::string str_arr[3] = {"good", "healthy", "muscular"};

	//use case with integer
	std::cout << CYNHB << "(int)before iter functioncall" << RESET << std::endl;
	for (int i = 0; i < int_len; i++)
		std::cout << int_arr[i] << std::endl;
	std::cout << std::endl;
	std::cout << CYNHB << "(int)iter functioncall" << RESET << std::endl;
	std::cout << std::endl;

	::iter(int_arr, int_len, &increase);
	std::cout << CYNHB << "(int)after iter functioncall" << RESET << std::endl;
	for (int i = 0; i < int_len; i++)
		std::cout << int_arr[i] << std::endl;

	std::cout << std::endl;
	//use case with std::string
	std::cout << CYNHB << "(str)before iter functioncall" << RESET << std::endl;
	for (int i = 0; i < float_len; i++)
		std::cout << str_arr[i] << std::endl;
	std::cout << std::endl;
	std::cout << CYNHB << "(str)iter functioncall" << RESET << std::endl;
	std::cout << std::endl;

	::iter(str_arr, float_len, &add_not_prefix);
	std::cout << CYNHB << "(str)after iter functioncall" << RESET << std::endl;
	for (int i = 0; i < float_len; i++)
		std::cout << str_arr[i] << std::endl;
}
