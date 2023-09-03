/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:51:43 by skunert           #+#    #+#             */
/*   Updated: 2023/09/03 18:29:45 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	std::string	prompt;
	PhoneBook TeleRom;

	TeleRom.set_default();
	std::cout << "Welcome to " << "\033[35m" << "TeleRom " << "\033[37m" << "your trustworthy PhoneBook!" << std::endl;
	while (1)
	{
		std::cout << "\033[37m" << "Please enter a command: ";
		std::cin >> prompt;
		if (!std::cin)
			break ;
		if (!(prompt.compare("EXIT")) && prompt.size() == 4)
			break ;
		else if (!(prompt.compare("ADD")) && prompt.size() == 3)
			TeleRom.add_new_contact();
		else if (!(prompt.compare("SEARCH")) && prompt.size() == 6)
			TeleRom.display_contacts();
		else
		{
			std::cout << "\033[31m" << "---------------------------------------------";
			std::cout << "\nPlease enter a valid command!" << std::endl;
			std::cout << "Valid commands are: " << "ADD " << "SEARCH " << "or EXIT\n";
			std::cout << "---------------------------------------------" << std::endl;
		}
	}
}
