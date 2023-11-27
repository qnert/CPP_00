/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_funcs.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:21:22 by skunert           #+#    #+#             */
/*   Updated: 2023/11/27 15:46:13 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstring>

void	display_char(std::string str)
{
	int		i			= std::atoi(str.c_str());
	char	c			= std::atoi(str.c_str());
	std::string check	= "infinffnannanf-inf-inff";

	if (i > 127 || check.find(str))
		std::cout << "char : impossible" << std::endl;
	else if (i < 32 || i == 127)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : " << c << std::endl;
}

void	display_int(std::string str)
{
	int			nb		= std::atoi(str.c_str());
	std::string check	= "infinffnannanf-inf-inff";

	if (std::atoll(str.c_str()) > INT_MAX || std::atoll(str.c_str()) < INT_MIN
		|| check.find(str)){
		std::cout << "int : impossible" << std::endl;
		return ;
	}
	std::cout << "int : " <<  nb << std::endl;
}

void	display_float(std::string str)
{
	float	ft = std::atof(str.c_str());
	if (!std::strchr(str.c_str(), '.'))
		std::cout << std::fixed << std::setprecision(1) << "float : " << ft << "f" << std::endl;
	else
		std::cout << std::fixed << "float : " << ft << "f" << std::endl;
}

void	display_double(std::string str)
{
	float	db = std::atof(str.c_str());

	if (!std::strchr(str.c_str(), '.'))
		std::cout << std::fixed << std::setprecision(1) << "double : " << db << std::endl;
	else
		std::cout << std::fixed << "double : " << db << std::endl;
}
