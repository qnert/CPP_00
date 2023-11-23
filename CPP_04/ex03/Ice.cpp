/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:25:05 by skunert           #+#    #+#             */
/*   Updated: 2023/11/23 16:42:14 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria()
{
	std::cout << "Ice default constructor called.\n";
	this->_type = "ice";
}

Ice::Ice(const Ice& other) : AMateria(other)
{
	this->_type = other._type;
}

Ice&	Ice::operator=(const Ice& other)
{
	(void) other;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice default destructor called.\n";
}

std::string const& Ice::getType(void) const
{
	return (this->_type);
}

Ice* Ice::clone(void) const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
