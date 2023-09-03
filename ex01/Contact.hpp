/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:36:17 by skunert           #+#    #+#             */
/*   Updated: 2023/09/03 16:17:35 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact{
	public :
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phonenbr;
		std::string	hometown;
	public :
		void	init();
};

#endif
