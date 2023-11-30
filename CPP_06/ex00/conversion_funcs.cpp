/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_funcs.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:21:22 by skunert           #+#    #+#             */
/*   Updated: 2023/11/30 18:22:23 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <climits>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>

void	conversion_char(char c)
{
	int	integer = static_cast<int>(c);
	float	ft = static_cast<float>(c);
	double	db = static_cast<double>(c);

	std::cout << "char : '" << c << "'" << std::endl;
	std::cout << "int : " << integer << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float : " << ft << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double : " << db << std::endl;
}

void	conversion_int(int nb)
{
	char	c = static_cast<char>(nb);
	float	ft = static_cast<float>(nb);
	double	db = static_cast<double>(nb);

	if (nb >= 0 && nb < 32)
		std::cout << "char : Non displayable" << std::endl;
	else if (nb < 0 || nb > 127)
		std::cout << "char : impossible" << std::endl;
	else
		std::cout << "char : '" << c << "'" << std::endl;
	std::cout << "int : " << nb << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float : " << ft << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double : " << db << std::endl;
}

void	conversion_double(double db)
{
	char	c = static_cast<char>(db);
	int		nb = static_cast<int>(db);
	float	ft = static_cast<float>(db);
	std::string str = "+inf+inff-inf-inffnannanf";

	if (nb >= 0 && nb < 32)
		std::cout << "char : Non displayable" << std::endl;
	else if (nb < 0 || nb > 127)
		std::cout << "char : impossible" << std::endl;
	else
		std::cout << "char : '" << c << "'" << std::endl;
	if (str.find(std::to_string(db)) != std::string::npos || db > INT_MAX)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << nb << std::endl;
	if (std::fmod(ft, 1.0f) == 0.0f && ft < 1000000.0f)
		std::cout << std::fixed << std::setprecision(1);
	std::cout << "float : " << ft << "f" << std::endl;
	std::cout << "double : " << db << std::endl;
}

void	conversion_float(float ft)
{
	char	c = static_cast<char>(ft);
	double	db = static_cast<double>(ft);
	std::string str = "+inf+inff-inf-inffnannanf";
	int	nb = static_cast<int>(ft);

	if (nb >= 0 && nb < 32)
		std::cout << "char : Non displayable" << std::endl;
	else if (nb < 0 || nb > 127)
		std::cout << "char : impossible" << std::endl;
	else
		std::cout << "char : '" << c << "'" << std::endl;
	if (str.find(std::to_string(ft)) != std::string::npos || db > INT_MAX)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << nb << std::endl;
	if (std::fmod(ft, 1.0f) == 0.0f && ft < 1000000.0f)
		std::cout << std::fixed << std::setprecision(1);
	if (db > __FLT_MAX__ || db < __FLT_MIN__)
		std::cout  << "float : impossible" << std::endl;
	else
		std::cout  << "float : " << ft << "f" << std::endl;
	std::cout << "double : " << db << std::endl;
}
