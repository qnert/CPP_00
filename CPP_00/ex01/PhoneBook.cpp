/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:04:15 by skunert           #+#    #+#             */
/*   Updated: 2023/09/04 12:11:34 by skunert          ###   ########.fr       */
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
	int	i;
	int	number;

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
	std::cin >> number;
	if (number < index && number >= 0 && !std::cin.fail())
		phonecontacts[number].display_whole_contact();
	else if (std::cin.fail())
	{
		std::cin.clear(); std::cin.ignore(512, '\n');
		std::cout << RED << "-------------------------------------------------------------\n";
		std::cout << "Error. Only numerical values accepted." << std:: endl;
		std::cout << "-------------------------------------------------------------\n" << RESET;
	}
	else
	{
		std::cout << RED << "-------------------------------------------------------------";
		std::cout << "\nIndex is not in the valid range of the phonebook contacts.\n";
		std::cout << "-------------------------------------------------------------\n" << RESET;
	}
};
