/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:35:58 by skunert           #+#    #+#             */
/*   Updated: 2023/09/04 11:51:07 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define MAGENTA "\033[35m"

class PhoneBook{
	private :
		int		index;
		int		nb_of_contacts;
		Contact	phonecontacts[8];
	public :
		void	set_default();
		void	add_new_contact();
		void	display_contacts();
};

#endif
