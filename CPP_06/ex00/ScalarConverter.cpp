/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:43:19 by skunert           #+#    #+#             */
/*   Updated: 2023/11/27 11:25:08 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	is_char(std::string str){
	if (str.length() == 1 && (str[0] < '0' || str[0] > '9'))
		return (true);
	else
		return (false);
}

bool	is_int(std::string str)
{
	size_t	i = 0;

	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && std::isdigit(str[i]))
		i++;
	if (i == str.length())
		return (true);
	else
		return (false);
}

bool	is_double(std::string str)
{
	int		count = 0;
	size_t	i = 0;

	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i]){
		if (!std::isdigit(str[i])){
			if (str[i] != '.')
				return (false);
			else if (str[i] == '.' && count == 0)
				count++;
			else
				return (false);
		}
		i++;
	}
	return (true);
}

bool	is_float(std::string str)
{
	int		count = 0;
	size_t	i = 0;

	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i]){
		if (!std::isdigit(str[i])){
			if (str[i] != '.' && str[i] != 'f')
				return (false);
			else if (str[i] == '.' && count == 0)
				count++;
			else if (str[i] == 'f' && i == str.length() - 1)
				count++;
			else
				return (false);
		}
		i++;
	}
	return (true);
}

void	ScalarConverter::convert(std::string str)
{
	if (str.length() == 0){
		std::cout << "Input string is empty." << std::endl;
		return ;
	}
	if (is_char(str)){
		std::cout << "Input string is a character.\n";
		return ;
	}
	if (is_int(str)){
		std::cout << "Input string is a integer.\n";
		return ;
	}
	if (is_double(str)){
		std::cout << "Input string is a double.\n";
		return ;
	}
	if (is_float(str)){
		std::cout << "Input string is a float.\n";
		return ;
	}
	std::cout << "No valid type found.\n";
}
