/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:24:10 by skunert           #+#    #+#             */
/*   Updated: 2023/11/23 16:41:36 by skunert          ###   ########.fr       */
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
	this->_type = other._type;
	this->brain = new Brain(*(other.brain));
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		this->_type = other._type;
		delete (this->brain);
		this->brain = new Brain(*(other.brain));
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat default destructor called.\n";
	delete (this->brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meeeooow!\n";
}
