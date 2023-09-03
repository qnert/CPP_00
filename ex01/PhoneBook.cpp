/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:04:15 by skunert           #+#    #+#             */
/*   Updated: 2023/09/03 18:17:00 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void	PhoneBook::set_default()
{
	index = 0;
	nb_of_contacts = 8;
};

void	PhoneBook::add_new_contact()
{
	if (index > nb_of_contacts - 1)
	{
		index = 0;
	}
	Contact c;
	c.init();
	phonecontacts[index] = c;
	index++;
};

void	PhoneBook::display_contacts()
{
	int	i;
	int	number;

	i = 0;
	if (index == 0)
	{
		std::cout << "-------------------------------------------------------------";
		std::cout << "\nAdd a contact first to be able to use the search command." << std::endl;
		std::cout << "-------------------------------------------------------------\n";
		return ;
	}
	std::cout << "|index     |first name|last name |nickname  |" << std::endl;
	while (i < index)
	{
		phonecontacts[i].display_data(i);
		i++;
	}
	std::cout << "Please enter the contact index your searching for: ";
	std::cin >> number;
	if (number < index)
		phonecontacts[number].display_whole_contact();
	else
	{
		std::cout << "----------------------------------------------------------";
		std::cout << "\nIndex is not in the valid range of the phonebook contacts.\n";
		std::cout << "----------------------------------------------------------\n";
	}
};
