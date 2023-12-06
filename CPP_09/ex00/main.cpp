/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:16:27 by skunert           #+#    #+#             */
/*   Updated: 2023/12/06 19:44:13 by skunert          ###   ########.fr       */
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

void	check_input_with_database(BitcoinExchange& BE1, std::string str){
	size_t		idx = 0;
	std::string	tmp;
	size_t		found_pos;

	(void) BE1;
	found_pos = str.find("\n");
	while (found_pos != std::string::npos){
		std::cout << str.substr(idx, found_pos);
		idx = found_pos;
		found_pos = str.find("\n", found_pos + 1);
	}
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