/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:44:17 by skunert           #+#    #+#             */
/*   Updated: 2023/12/06 18:30:56 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string	get_key(std::string& buff){
	int	i = 0;
	while (buff[i] != ','){i++;}
	return (buff.substr(0, i));
}

std::string	get_value(std::string& buff){
	int	i = 0;
	while (buff[i] != ','){i++;}
	int	check = i + 1;
	while (buff[i] != '\n' && buff[i]){i++;}
	return (buff.substr(check, i));
}

BitcoinExchange::BitcoinExchange(void){
	std::string		buff;
	std::ifstream	database;

	database.open("./data.csv");
	if (!database.is_open())
		throw (std::runtime_error("Database file was not found!\n"));
	while (std::getline(database, buff)){
		this->database[get_key(buff)] = get_value(buff);
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

std::string&		BitcoinExchange::operator[](std::string key){
	return (this->database[key]);
}

BitcoinExchange::~BitcoinExchange(void){};