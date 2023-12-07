/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:44:17 by skunert           #+#    #+#             */
/*   Updated: 2023/12/07 22:39:29 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	is_erasable(char c){
	return (c == '-');
}

int	get_key_date(std::string& buff, int i, char c){
	int	j = i;
	int	date = 0;
	std::string	tmp;
	while (buff[i] != c && buff[i]){i++;}
	tmp =  buff.substr(j, i);
	tmp.erase(std::remove_if(tmp.begin(), tmp.end(), is_erasable), tmp.end());
	date = std::atoi(tmp.c_str());
	return (date);
}

float	get_value(std::string& buff){
	int	i = 0;
	while (buff[i] != ','){i++;}
	int	check = i + 1;
	while (buff[i] != '\n' && buff[i]){i++;}
	return (std::strtof(buff.substr(check, i).c_str(), nullptr));
}

BitcoinExchange::BitcoinExchange(void){
	std::string		buff;
	std::ifstream	database;

	database.open("./data.csv");
	if (!database.is_open())
		throw (std::runtime_error("Database file was not found!\n"));
	while (std::getline(database, buff)){
		this->database[get_key_date(buff, 0, ',')] = get_value(buff);
	}
	database.close();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const& other){
	*this = other;
}

BitcoinExchange&	BitcoinExchange::operator=(BitcoinExchange const& other){
	if (this != &other){
		this->database = other.database;
	}
	return (*this);
}

float&		BitcoinExchange::operator[](int key){
	return (this->database[key]);
}

BitcoinExchange::~BitcoinExchange(void){};