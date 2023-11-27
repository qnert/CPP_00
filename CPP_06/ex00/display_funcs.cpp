/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_funcs.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:21:22 by skunert           #+#    #+#             */
/*   Updated: 2023/11/27 13:55:19 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	display_char(std::string str)
{
	int		i = std::atoi(str.c_str());
	char	c = std::atoi(str.c_str());

	if (i > 127)
		std::cout << "char : impossible" << std::endl;
	else if (c < 32 || c == 127 || (c > '0' && c < '9'))
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : " << c << std::endl;
}

void	display_int(std::string str)
{
	int	nb = 0;

	if (std::atoll(str.c_str()) > INT_MAX ||std::atoll(str.c_str()) < INT_MAX){
		std::cout << "int : impossible" << std::endl;
		return ;
	}
	else if (str.length() == 1)
		nb = str.c_str()[0];
	else
		nb = std::atoi(str.c_str());
	std::cout << "int : " <<  nb << std::endl;
}
