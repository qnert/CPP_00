/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:04:15 by skunert           #+#    #+#             */
/*   Updated: 2023/09/05 17:07:48 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void	PhoneBook::set_default()
{
	index = 0;
	nb_of_contacts = 0;
};

void	PhoneBook::add_new_contact()
{
	if (nb_of_contacts > 7)
		nb_of_contacts = 0;
	Contact c;
	c.init();
	phonecontacts[nb_of_contacts] = c;
	nb_of_contacts++;
	if (index < 8)
		index++;
};

void	PhoneBook::display_contacts()
{
	int			i;
	int			nb;
	std::string	number;

	i = 0;
	if (index == 0)
	{
		std::cout << RED << "-------------------------------------------------------------";
		std::cout << "\nAdd a contact first to be able to use the search command." << std::endl;
		std::cout << "-------------------------------------------------------------\n" << RESET;
		return ;
	}
	std::cout << "---------------------------------------------\n";
	std::cout << "|index     |first name|last name |nickname  |" << std::endl;
	while (i < index)
	{
		phonecontacts[i].display_data(i);
		i++;
	}
	std::cout << "---------------------------------------------\n";
	std::cout << "Please enter the contact index your searching for: ";
	std::getline(std::cin, number);
	nb = std::atoi(number.c_str());
	if (nb < index && nb >= 0 && (number.size() == 1 && number[0] >= '0' && number[0] <= '9'))
		phonecontacts[nb].display_whole_contact();
	else
	{
		std::cout << RED << "-------------------------------------------------------------";
		std::cout << "\nNot a valid input for a contact to be shown.\n";
		std::cout << "-------------------------------------------------------------\n" << RESET;
	}
};
