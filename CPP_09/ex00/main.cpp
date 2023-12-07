/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:16:27 by skunert           #+#    #+#             */
/*   Updated: 2023/12/07 22:42:10 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string	get_infile_content(std::string str){
	std::string		buff;
	std::string		ret_str;
	std::ifstream	infile;

	infile.open(str);
	if (!infile.is_open()){
		std::cout << "Unvalid file as input." << std::endl;
		return ("");
	}
	while (std::getline(infile, buff)){
		ret_str.append(buff);
		ret_str.append("\n");
	}
	return (ret_str);
}

int	check_input_with_database(BitcoinExchange& BE1, std::string& buff){
	int	i = 0;
	float	tmp;
	int	date;
	while (buff[i]){
		date = get_key_date(buff, i, '|');
		while (buff[i] != '|' && buff[i]){
			if(buff[i] == '\n'){
				std::cout << "Error: bad input" << std::endl;
				break ;
			}
			i++;
		}
		tmp = i + 1;
		if (buff[i] == '\n'){
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
		while (BE1.database.find(date) == BE1.database.end()){--date;}
		std::cout << "date " << " => " << tmp << " = "  << BE1[date] * tmp << std::endl;
		i++;
	}
	return (0);
}

int	main(int argc, char** argv){
	if (argc == 2){
		BitcoinExchange BE1;
		std::string		input_content;

		input_content = get_infile_content(argv[1]);
		if (input_content.size() == 0)
			return (-1);
		check_input_with_database(BE1, input_content);
	}
	return (0);
}