/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:42:10 by skunert           #+#    #+#             */
/*   Updated: 2023/09/28 16:56:09 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	Harl person;
	int	i;
	void	(Harl::*funcptrs[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	func_names[4] = {"debug", "info", "warning", "error"};

	i = 0;
	while (i < 4)
	{
		if (!level.compare(func_names[i]))
		{
			(person.*funcptrs[i])();
			return ;
		}
		i++;
	}
	std::cout << "The entered level is not matching any valid levels!\n";
	return ;
}
