/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:34:52 by skunert           #+#    #+#             */
/*   Updated: 2024/01/06 19:51:18 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <climits>

class ScalarConverter
{
	public:
		static void convert(std::string str);

	private:
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const& other);
		ScalarConverter&	operator=(ScalarConverter const& other);
		~ScalarConverter(void);
};

bool	is_char(const std::string str);
bool	is_int(const std::string str);
bool	is_double(const std::string str);
bool	is_float(const std::string str);

void	conversion_char(char c);
void	conversion_int(int c);
void	conversion_double(double db);
void	conversion_float(float ft);
