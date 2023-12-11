/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:44:17 by skunert           #+#    #+#             */
/*   Updated: 2023/12/11 13:36:29 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//helper functions
bool	is_erasable(char c){
	return (c == '-');
}
std::string	convert_back_to_date(int date){
	std::string	str_date = std::to_string(date);
	int	len = str_date.size();
	if (len < 6)
		return ("");
	str_date.insert(len - 4 , "-");
	str_date.insert(len - 1, "-");
	return (str_date);
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

// Canonical Form
BitcoinExchange::BitcoinExchange(void){
	std::string		buff;
	std::ifstream	_database;

	_database.open("./data.csv");
	if (!_database.is_open())
		throw (std::runtime_error("_Database file was not found!\n"));
	while (std::getline(_database, buff)){
		this->_database[get_key_date(buff, 0, ',')] = get_value(buff);
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
	int	i = 13;
	float	tmp;
	int	date;
	int	check;
	while (buff[i]){
		date = get_key_date(buff, i, '|');
		while (buff[i] != '|' && buff[i]){
			if(buff[i] == '\n' || date >= 20220329 || date <= 20090102){
				std::cout << "Error: bad input => " << convert_back_to_date(date) << std::endl;
				break ;
			}
			i++;
		}
		tmp = i + 1;
		if (buff[i] == '\n' || date > 20220329 || date < 20090102){
			while (buff[i] != '\n' && buff[i] != '\0'){i++;}
			i++;
			continue ;
		}
		while (buff[i] != '\n' && buff[i]){i++;};
		try{
			tmp = std::atof(buff.substr(tmp, i).c_str());
			if (tmp < 0){
				std::cout << "Error: not a positive number" << std::endl;
				i++;
				continue;
			}
			else if (tmp > 1000){
				std::cout << "Error: too large a number" << std::endl;
				i++;
				continue;
			}
		}
		catch(std::exception& e){
			std::cout << "std::atoi fail " << tmp << std::endl;
			return (-1);
		}
		check = date;
		while (this->_database.find(date) == this->_database.end()){--date;}
		std::cout << convert_back_to_date(check) << " => " << tmp << " = "  << this->_database[date] * tmp << std::endl;
		i++;
	}
	return (0);
}

bool	BitcoinExchange::check_input_header(std::string& buff){
	int					i = 0;
	std::string			line;
	std::istringstream	iss(buff);

	while (std::getline(iss, line, '\n')){
		if (i == 0 && line.compare("date | value"))
			return (false);
		else
			return (true);
	}
	return (true);
}
