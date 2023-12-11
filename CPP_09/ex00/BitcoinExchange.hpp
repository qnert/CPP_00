/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:17:02 by skunert           #+#    #+#             */
/*   Updated: 2023/12/11 13:32:58 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <map>

class BitcoinExchange{
	private:
		std::map<int, float> _database;

	public:
		int		check_input(std::string& buff);
		bool	check_input_header(std::string& buff);

	BitcoinExchange(void);
	BitcoinExchange(BitcoinExchange const& other);
	BitcoinExchange&	operator=(BitcoinExchange const& other);
	float&		operator[](int key);
	~BitcoinExchange(void);
};

int			get_key_date(std::string& buff, int i, char c);
std::string	convert_back_to_date(int date);
