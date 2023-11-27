/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:34:52 by skunert           #+#    #+#             */
/*   Updated: 2023/11/27 13:30:20 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <limits.h>

class ScalarConverter
{
	public:
		static void convert(std::string str);
};

bool	is_char(const std::string str);
bool	is_int(const std::string str);
bool	is_double(const std::string str);
bool	is_float(const std::string str);

void	display_char(std::string str);
void	display_int(std::string str);
