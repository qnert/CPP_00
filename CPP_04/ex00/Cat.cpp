/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:24:10 by skunert           #+#    #+#             */
/*   Updated: 2023/11/17 13:20:33 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default constructor called.\n";
	this->_type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other)
{
	*this = other;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		this->_type = other._type;
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat default deconstructor called.\n";
}

void	Cat::makeSound(void) const
{
	std::cout << "Meeeooow!\n";
}