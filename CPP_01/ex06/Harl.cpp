/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:42:10 by skunert           #+#    #+#             */
/*   Updated: 2024/01/12 12:46:34 by skunert          ###   ########.fr       */
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
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i;
	void	(Harl::*funcptrs[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	func_names[4] = {"debug", "info", "warning", "error"};

	i = 0;
	while (i < 4)
	{
		if (!level.compare(func_names[i]))
			break ;
		i++;
	}
	switch(i)
	{
		case 0:
			(this->*funcptrs[0])();
			break ;
		case 1:
			(this->*funcptrs[1])();
			break ;
		case 2:
			(this->*funcptrs[2])();
			break ;
		case 3:
			(this->*funcptrs[3])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
	return ;
}
