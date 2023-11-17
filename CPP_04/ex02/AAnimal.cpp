/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:14:22 by skunert           #+#    #+#             */
/*   Updated: 2023/11/16 13:02:32 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal default constructor called.\n";
	this->_type = "default";
}

AAnimal::AAnimal(const AAnimal& other)
{
	*this = other;
}

AAnimal&	AAnimal::operator=(const AAnimal& other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal default deconstructor called.\n";
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}
