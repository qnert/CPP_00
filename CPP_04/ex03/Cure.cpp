/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:20:18 by skunert           #+#    #+#             */
/*   Updated: 2023/11/23 16:42:08 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria()
{
	std::cout << "Cure default constructor called.\n";
	this->_type = "cure";
}

Cure::Cure(const Cure& other) : AMateria(other)
{
	this->_type = other._type;
}

Cure&	Cure::operator=(const Cure& other)
{
	(void) other;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure default destructor called.\n";
}

std::string const& Cure::getType(void) const
{
	return (this->_type);
}

Cure* Cure::clone(void) const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}
