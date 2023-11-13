/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:38:49 by skunert           #+#    #+#             */
/*   Updated: 2023/11/13 18:13:26 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/************************************************************************************\
\************************************************************************************/
//constructor functions
Fixed::Fixed(void)
{
	this->value = 0;
}

Fixed::Fixed(const int n)
{
	this->value = (n << this->bits);
};

Fixed::Fixed(const float n)
{
	this->value = roundf(n * (1 << this->bits));
};

Fixed::Fixed(const Fixed& other)
{
	this->value = other.getRawBits();
}

/************************************************************************************\
\************************************************************************************/
//deconstructor
Fixed::~Fixed(void)
{};

/************************************************************************************\
\************************************************************************************/
//member functions
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

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a.value < b.value)
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.value < b.value)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a.value > b.value)
		return (b);
	return (a);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.value > b.value)
		return (a);
	return (b);
}

/************************************************************************************\
\************************************************************************************/
//operation functions
//copy assignment operator
Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
	{
		this->value = other.getRawBits();
	}
	return (*this);
}

/************************************************************************************\
\************************************************************************************/
//arithmetic operators
Fixed	Fixed::operator+(const Fixed& other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	if (other.value != 0)
		return (Fixed(this->toFloat() / other.toFloat()));
	else
	{
		std::cerr << "Error: Division by zero is not possible\n";
		return (*this);
	}
}

/************************************************************************************\
\************************************************************************************/
//comparison operators

bool	Fixed::operator>(const Fixed& other) const
{
	return (this->value > other.value);
}

bool	Fixed::operator<(const Fixed& other) const
{
	return (this->value < other.value);
}

bool	Fixed::operator>=(const Fixed& other) const
{
	return (this->value >= other.value);
}

bool	Fixed::operator<=(const Fixed& other) const
{
	return (this->value <= other.value);
}

bool	Fixed::operator==(const Fixed& other) const
{
	return (this->value == other.value);
}

bool	Fixed::operator!=(const Fixed& other) const
{
	return (this->value != other.value);
}

/************************************************************************************\
\************************************************************************************/
//increment and decrement operators

Fixed& Fixed::operator++(void)
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp(*this);

	++this->value;
	return (tmp);
}

Fixed& Fixed::operator--(void)
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp(*this);

	--this->value;
	return (tmp);
}

/************************************************************************************\
\************************************************************************************/
//ostream operator
std::ostream& operator<<(std::ostream &os, const Fixed& other)
{
	os << other.toFloat();
	return (os);
}
