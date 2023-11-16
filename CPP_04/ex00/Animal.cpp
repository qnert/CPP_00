/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:14:22 by skunert           #+#    #+#             */
/*   Updated: 2023/11/16 12:52:39 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called.\n";
	this->_type = "default";
}

Animal::Animal(const Animal& other)
{
	*this = other;
}

Animal&	Animal::operator=(const Animal& other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal default deconstructor called.\n";
}

void	Animal::makeSound(void) const
{
	std::cout << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
