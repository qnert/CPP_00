/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:38:49 by skunert           #+#    #+#             */
/*   Updated: 2023/11/10 16:32:18 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::Fixed(int n){ this->value = n;};

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
};

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called\n";
	this->value = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
	{
		this->value = other.getRawBits();
	}
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}