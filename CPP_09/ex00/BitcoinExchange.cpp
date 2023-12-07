/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:44:17 by skunert           #+#    #+#             */
/*   Updated: 2023/12/07 16:53:52 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

struct CharToRemove {
	char target;

	CharToRemove(char c) : target(c) {}

	bool operator()(char c) const {
		return c == target;
	}
};

int	get_key_date(std::string& buff){
	int	i = 0;
	int	date = 0;
	std::string	tmp;
	while (buff[i] != ',' && buff[i]){i++;}
	tmp =  buff.substr(0, i);
	tmp.erase(std::remove_if(tmp.begin(), tmp.end(), CharToRemove('-')), tmp.end());
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
		this->database[get_key_date(buff)] = get_value(buff);
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