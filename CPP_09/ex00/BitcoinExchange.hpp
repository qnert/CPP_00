/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:17:02 by skunert           #+#    #+#             */
/*   Updated: 2023/12/09 13:48:34 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange{
	public:
		std::map<int, float> database;

	public:

	BitcoinExchange(void);
	BitcoinExchange(BitcoinExchange const& other);
	BitcoinExchange&	operator=(BitcoinExchange const& other);
	float&		operator[](int key);
	~BitcoinExchange(void);
};

int			get_key_date(std::string& buff, int i, char c);
std::string	convert_back_to_date(int date);
