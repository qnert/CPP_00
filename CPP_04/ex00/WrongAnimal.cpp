/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:14:22 by skunert           #+#    #+#             */
/*   Updated: 2023/11/16 12:40:17 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called.\n";
	this->_type = "default";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	*this = other;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal default deconstructor called.\n";
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound.\n" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}
