/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:36:17 by skunert           #+#    #+#             */
/*   Updated: 2024/01/06 19:32:11 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

//Contact class helper
bool	is_alpha_string(std::string str);
bool	is_nbr_string(std::string str);
bool	is_print_string(std::string str);
std::string	get_input_alpha(std::string str);
std::string	get_input_phonenbr(std::string str);
std::string get_input_all(std::string str);

class Contact{
	private :
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phonenbr;
		std::string	d_secret;
	public :
		void	init();
		void	display_data(int index);
		void	display_whole_contact();
};

#endif
