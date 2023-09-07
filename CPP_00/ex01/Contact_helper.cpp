/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_helper.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 23:13:02 by skunert           #+#    #+#             */
/*   Updated: 2023/09/07 17:05:27 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool	is_alpha_string(std::string str)
{
	int	i;

	i = 0;
	if (!str.size())
	{
		std::cout << RED << "\n No input given.\n\n" << RESET;
		return (false);
	}
	while (str[i] != '\0')
	{
		if (!std::isalpha(str[i]))
		{
			std::cout << RED << "\nInput can only contain letters.\n\n" << RESET;
			return (false);
		}
		i++;
	}
	return (true);
}

bool	is_nbr_string(std::string str)
{
	int	i;

	i = 0;
	if (str.size() < 2 || (str[i] == '+' && str.size() < 4))
	{
		std::cout << RED << "\n Too short number input.\n\n" << RESET;
		return (false);
	}
	while (str[i] != '\0')
	{
		if (!std::isdigit(str[i]))
		{
			if (i != 0 || str[i] != '+')
			{
				std::cout << RED << "\nInput can only contain numbers.\n\n" << RESET;
				return (false);
			}
		}
		i++;
	}
	return (true);
}

bool	is_print_string(std::string str)
{
	int	i;

	i = 0;
	if (!str.size())
	{
		std::cout << RED << "\n No input given.\n\n" << RESET;
		return (false);
	}
	while (str[i] != '\0')
	{
		if (!std::isprint(str[i]))
		{
			std::cout << RED << "\nInput can only contain printable character.\n\n" << RESET;
			return (false);
		}
		i++;
	}
	return (true);
}

std::string	get_input_alpha(std::string str)
{
	std::string	buff;

	while (std::getline(std::cin, buff))
	{
		if (is_alpha_string(buff))
			break ;
		std::cout << "Enter " << str << ": ";
	}
	return (buff);
}

std::string	get_input_phonenbr(std::string str)
{
	std::string	buff;

	while (std::getline(std::cin, buff))
	{
		if (is_nbr_string(buff))
			break ;
		std::cout << "Enter " << str << ": ";
	}
	return (buff);
}

std::string get_input_all(std::string str)
{
	std::string	buff;

	while (std::getline(std::cin, buff))
	{
		if (is_print_string(buff))
			break ;
		std::cout << "Enter " << str << ": ";
	}
	return (buff);
}
