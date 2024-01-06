/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:16:27 by skunert           #+#    #+#             */
/*   Updated: 2024/01/06 20:33:28 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string	get_infile_content(std::string str){
	std::string		buff;
	std::string		ret_str;
	std::ifstream	infile;

	infile.open(str.c_str());
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


int	main(int argc, char** argv){
	if (argc == 2){
		try{
			BitcoinExchange BE1;
			std::string		input_content;

			input_content = get_infile_content(argv[1]);
			if (input_content.size() == 0)
				return (-1);
			BE1.check_input(input_content);
		}
		catch (std::exception& e){
			std::cout << e.what();
		}
	}
	return (0);
}
