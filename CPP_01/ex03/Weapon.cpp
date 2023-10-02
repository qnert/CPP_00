/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:01:44 by skunert           #+#    #+#             */
/*   Updated: 2023/10/02 11:28:18 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	this->_type = "fist";
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon(void)
{
}

void	Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}

const std::string&	Weapon::getType(void)
{
	return (this->_type);
}

