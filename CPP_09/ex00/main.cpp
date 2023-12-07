/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:16:27 by skunert           #+#    #+#             */
/*   Updated: 2023/12/07 16:57:30 by skunert          ###   ########.fr       */
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

void	check_input_with_database(BitcoinExchange& BE1, std::string& buff){
	(void) buff;
	std::cout << BE1[20151224] << std::endl;
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