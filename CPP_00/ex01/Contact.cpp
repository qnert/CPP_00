/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:45:33 by skunert           #+#    #+#             */
/*   Updated: 2023/09/05 23:13:19 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::init()
{
	std::cout << GREEN << "-------------------------------------------------------------\n" << RESET;
	std::cout << "Enter first name: "; first_name = get_input_alpha("first name");
	std::cout << "Enter last name: "; last_name = get_input_alpha("last name");
	std::cout << "Enter nickname: "; nickname = get_input_alpha("nickname");
	std::cout << "Enter phonenumber: "; phonenbr = get_input_phonenbr("phonenumber");
	std::cout << "Enter darkest secret: "; d_secret = get_input_all("darkest secret");
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
	std::cout << "First name:     " << first_name << std::endl;
	std::cout << "Last name:      " << last_name << std::endl;
	std::cout << "Nickname:       " << nickname << std::endl;
	std::cout << "Phonenumber:    " << phonenbr << std::endl;
	std::cout << "Darkest secret: " << d_secret << std::endl;
};
