/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:45:33 by skunert           #+#    #+#             */
/*   Updated: 2023/09/04 12:36:56 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::init()
{
	std::cout << GREEN << "-------------------------------------------------------------\n" << RESET;
	std::cout << "Enter first name: "; std::cin >> first_name;
	std::cout << "Enter last name: "; std::cin >> last_name;
	std::cout << "Enter nickname: "; std::cin >> nickname;
	std::cout << "Enter phonenumber: "; std::cin >> phonenbr;
	std::cout << "Enter hometown: "; std::cin >> hometown;
	std::cout << GREEN << "-------------------------------------------------------------\n" << RESET;
}

void	Contact::display_data(int index)
{
	std::cout << "|" << std::setfill (' ') << std::setw (10) << index;
	if (first_name.size() <= 10)
		std::cout << "|" << std::setfill (' ') << std::setw (10) << first_name;
	else
		std::cout << "|" << first_name.substr(0, 9) << ".";
	if (last_name.size() <= 10)
		std::cout << "|" << std::setfill (' ') << std::setw (10) << last_name;
	else
		std::cout << "|" << last_name.substr(0, 9) << ".";
	if (nickname.size() <= 10)
		std::cout << "|" << std::setfill (' ') << std::setw (10) << nickname << "|" << std::endl;
	else
		std::cout << "|" << nickname.substr(0, 9) << "." << "|" << std::endl;
}

void	Contact::display_whole_contact()
{
	std::cout << "First name:  " << first_name << std::endl;
	std::cout << "Last name:   " << last_name << std::endl;
	std::cout << "Nickname:    " << nickname << std::endl;
	std::cout << "Phonenumber: " << phonenbr << std::endl;
	std::cout << "Hometown:    " << hometown << std::endl;
};
