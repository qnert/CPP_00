/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:16:27 by skunert           #+#    #+#             */
/*   Updated: 2023/12/07 21:49:10 by skunert          ###   ########.fr       */
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
	while (buff[i]){
		float	tmp;
		int	date = get_key_date(buff, i);
		while (buff[i] != '|' && buff[i]){i++;};
		tmp = i + 1;
		while (buff[i] != '\n' && buff[i]){i++;};
		try{
			tmp = std::atof(buff.substr(tmp, i).c_str());
			if (tmp < 0 || tmp > 6.44245e+08){
				std::cout << "Negative input" << std::endl;
				return (-1);
			}
		}
		catch(std::exception& e){
			std::cout << "std::atoi fail " << tmp << std::endl;
			return (-1);
		}
		while (BE1.database.find(date) == BE1.database.end()){--date;}
		std::cout << BE1[date] * tmp << std::endl;
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