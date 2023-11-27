/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_funcs.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:17:08 by skunert           #+#    #+#             */
/*   Updated: 2023/11/27 13:53:13 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

bool	is_char(const std::string str){
	if (str.length() == 1 && (str[0] < '0' || str[0] > '9'))
		return (true);
	else
		return (false);
}

bool	is_int(const std::string str){
	size_t	i = 0;

	if (std::atol(str.c_str()) > INT_MAX || std::atol(str.c_str()) < INT_MIN)
		return (false);
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && std::isdigit(str[i]))
		i++;
	if (i == str.length())
		return (true);
	else
		return (false);
}

bool	is_double(const std::string str){
	int		count = 0;
	size_t	i = 0;

	if (str == "-inf" || str == "+inf" || str == "nan")
		return (true);
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
	if (str.find('.') == 0)
		return (false);
	return (true);
}

bool	is_float(const std::string str){
	int		count = 0;
	size_t	i = 0;

	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (true);
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
	if (str.find('.') == 0)
		return (false);
	return (true);
}
