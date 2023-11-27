/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:43:19 by skunert           #+#    #+#             */
/*   Updated: 2023/11/27 18:39:29 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(ScalarConverter const& other){
	*this = other;
}

ScalarConverter&	ScalarConverter::operator=(ScalarConverter const& other){
	(void)other;
	return (*this);
}

ScalarConverter::~ScalarConverter(){}

void	ScalarConverter::convert(const std::string str)
{
	if (str.length() == 0){
		std::cout << "Input string is empty." << std::endl;
		return ;
	}
	if (is_char(str)){
		conversion_char(str[0]);
		return ;
	}
	if (is_int(str)){
		conversion_int(std::atoi(str.c_str()));
		return ;
	}
	if (is_double(str)){
		conversion_double(std::strtod(str.c_str(), NULL));
		return ;
	}
	if (is_float(str)){
		conversion_float(std::atof(str.c_str()));
		return ;
	}
	std::cout << "No valid type found." << std::endl;
}
