/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:24:10 by skunert           #+#    #+#             */
/*   Updated: 2023/11/16 16:00:46 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default constructor called.\n";
	this->_type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other)
{
	*this = other;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat default deconstructor called.\n";
	delete (this->brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meeeooow!\n";
}