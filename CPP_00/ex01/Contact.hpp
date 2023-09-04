/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:36:17 by skunert           #+#    #+#             */
/*   Updated: 2023/09/04 11:51:19 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

#define RESET "\033[0m"
#define GREEN "\033[32m"

class Contact{
	private :
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phonenbr;
		std::string	hometown;
	public :
		void	init();
		void	display_data(int index);
		void	display_whole_contact();
};

#endif
