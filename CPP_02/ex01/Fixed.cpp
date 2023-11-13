/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:38:49 by skunert           #+#    #+#             */
/*   Updated: 2023/11/13 14:04:02 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called\n";
	this->value = (n << this->bits);
};

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called\n";
	this->value = roundf(n * (1 << this->bits));
};

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

std::ostream& operator<<(std::ostream &os, const Fixed& other)
{
	os << other.toFloat();
	return (os);
}

int	Fixed::getRawBits( void ) const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int	Fixed::toInt(void) const
{
	return (this->value >> this->bits);
}

float	Fixed::toFloat(void) const
{
	return (float(this->value) / float((1 << this->bits)));
}
