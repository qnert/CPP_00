/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:45:33 by skunert           #+#    #+#             */
/*   Updated: 2023/09/03 15:54:16 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::init()
{
	std::cout << "Enter first name: "; std::cin >> first_name;
	std::cout << "Enter last name: "; std::cin >> last_name;
	std::cout << "Enter nickname: "; std::cin >> nickname;
	std::cout << "Enter phonenumber: "; std::cin >> phonenbr;
	std::cout << "Enter hometown: "; std::cin >> hometown;
}
