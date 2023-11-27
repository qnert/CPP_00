/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:43:19 by skunert           #+#    #+#             */
/*   Updated: 2023/11/27 17:29:11 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	ScalarConverter::convert(const std::string str)
{
	if (str.length() == 0){
		std::cout << "Input string is empty." << std::endl;
		return ;
	}
	if (is_char(str)){
		std::cout << "char" << std::endl;
		conversion_char(str[0]);
		return ;
	}
	if (is_int(str)){
		std::cout << "int" << std::endl;
		conversion_int(std::atoi(str.c_str()));
		return ;
	}
	if (is_double(str)){
		std::cout << "double" << std::endl;
		conversion_double(std::strtod(str.c_str(), NULL));
		return ;
	}
	if (is_float(str)){
		std::cout << "float" << std::endl;
		conversion_float(std::atof(str.c_str()));
		return ;
	}
	std::cout << "No valid type found." << std::endl;
}
