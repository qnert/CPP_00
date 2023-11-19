/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:06:19 by skunert           #+#    #+#             */
/*   Updated: 2023/11/18 12:43:35 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria default constructor called.\n";
	this->_type = "default";
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria param constructor called.\n";
	this->_type = type;
}

AMateria::AMateria(const AMateria& other)
{
	this->_type = other._type;
}

AMateria&	AMateria::operator=(const AMateria& other)
{
	(void) other;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria default deconstructor called.\n";
}

std::string const& AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void) target;
	std::cout << "AMateria can't be used.\n";
}