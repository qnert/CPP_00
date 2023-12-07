/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:17:02 by skunert           #+#    #+#             */
/*   Updated: 2023/12/07 21:41:54 by skunert          ###   ########.fr       */
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

int	get_key_date(std::string& buff, int i);