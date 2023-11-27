/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:43:19 by skunert           #+#    #+#             */
/*   Updated: 2023/11/27 13:52:43 by skunert          ###   ########.fr       */
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
		std::cout << "Input string is a character." << std::endl;
		display_char(str);
		display_int(str);
		return ;
	}
	if (is_int(str)){
		std::cout << "Input string is a integer." << std::endl;
		display_char(str);
		display_int(str);
		return ;
	}
	if (is_double(str)){
		std::cout << "Input string is a double." << std::endl;
		display_char(str);
		display_int(str);
		return ;
	}
	if (is_float(str)){
		std::cout << "Input string is a float." << std::endl;
		display_char(str);
		display_int(str);
		return ;
	}
	std::cout << "No valid type found." << std::endl;
}
