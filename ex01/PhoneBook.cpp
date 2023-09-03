/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:04:15 by skunert           #+#    #+#             */
/*   Updated: 2023/09/03 16:29:05 by skunert          ###   ########.fr       */
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
