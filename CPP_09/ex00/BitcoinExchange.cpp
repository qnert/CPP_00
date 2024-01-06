/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:44:17 by skunert           #+#    #+#             */
/*   Updated: 2024/01/06 20:40:08 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//helper functions
bool	is_erasable(char c){
	return (c == '-');
}
std::string	convert_back_to_date(int date){
	std::string str_date;
	std::stringstream ss;
	ss << date;
	str_date = ss.str();
	int	len = str_date.size();
	if (len < 6)
		return ("");
	str_date.insert(len - 4 , "-");
	str_date.insert(len - 1, "-");
	return (str_date);
}

int	get_key_date_database(std::string buff){
	char*	end_ptr;
	long	year;
	long	month;
	long	day;
	year = std::strtol(buff.c_str(), &end_ptr, 10);
	if (!end_ptr) throw(std::runtime_error("Invalid date found!\n"));
	if (*end_ptr != '-') throw(std::runtime_error("Invalid date found!\n"));
	if (year > 2022 || year < 2009) throw(std::runtime_error("Invalid year found!\n"));

	buff = end_ptr + 1;
	month = std::strtol(buff.c_str(), &end_ptr, 10);
	if (!end_ptr) throw(std::runtime_error("Invalid date found!\n"));
	if (*end_ptr != '-') throw(std::runtime_error("Invalid date found!\n"));
	if (month > 12) throw(std::runtime_error("Invalid month found!\n"));

	buff = end_ptr + 1;
	day = std::strtol(buff.c_str(), &end_ptr, 10);
	if (day > 31 || day < 1) throw(std::runtime_error("Invalid day found!\n"));
	if (end_ptr[0] == '\0') throw(std::runtime_error("Error: no value found!\n"));
	return (year * 10000 + month * 100 + day);
}

float	get_value(std::string& buff, char c){
	int	i = 0;
	while (buff[i] && buff[i] != c){i++;}
	if (buff[i] == '\0' || buff[i + 1] == '\0')
		throw(std::runtime_error("Error: no value found!\n"));
	int	check = i + 1;
	while (buff[i] != '\n' && buff[i]){i++;}
	float	value = std::strtof(buff.substr(check, i).c_str(), 0);
	if (c == '|' && value > 1000)
		throw (std::runtime_error("Error: too large a number.\n"));
	else if (value < 0)
		throw (std::runtime_error("Error: not a positive number.\n"));
	return (value);
}

// Canonical Form
BitcoinExchange::BitcoinExchange(void){
	std::string		buff;
	std::ifstream	_database;

	_database.open("./data.csv");
	if (!_database.is_open())
		throw (std::runtime_error("_Database file was not found!\n"));
	std::getline(_database, buff);
	if (buff != "date,exchange_rate")
		std::runtime_error("_Database header invalid!\n");
	while (std::getline(_database, buff)){
		this->_database[get_key_date_database(buff)] = get_value(buff, ',');
	}
	_database.close();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const& other){
	*this = other;
}

BitcoinExchange&	BitcoinExchange::operator=(BitcoinExchange const& other){
	if (this != &other){
		this->_database = other._database;
	}
	return (*this);
}

float&		BitcoinExchange::operator[](int key){
	return (this->_database[key]);
}

BitcoinExchange::~BitcoinExchange(void){};

// member functions BitcoinExchange class
int	BitcoinExchange::check_input(std::string& buff){
	std::string			tmp;
	std::istringstream	iss(buff);

	std::getline(iss, tmp, '\n');
	if (tmp != "date | value"){
		std::cout << "Invalid header!" << std::endl;
		return (-1);
	}
	while (std::getline(iss, tmp, '\n')){
		try{
			int		date = get_key_date_database(tmp);
			int		check = date;
			float	value = get_value(tmp, '|');
			while (this->_database.find(date) == this->_database.end()){--date;}
				std::cout << convert_back_to_date(check) << " => " << value << " = "  << this->_database[date] * value << std::endl;
		}
		catch(std::exception& e){
			std::cout << e.what();
		}
	}
	return (0);
}
