/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:24:10 by skunert           #+#    #+#             */
/*   Updated: 2023/11/16 12:40:42 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "WrongCat default constructor called.\n";
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	*this = other;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);
		this->_type = other._type;
	}
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat default deconstructor called.\n";
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sound.\n";
}