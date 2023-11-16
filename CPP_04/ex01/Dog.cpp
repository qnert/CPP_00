/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:20:14 by skunert           #+#    #+#             */
/*   Updated: 2023/11/16 16:00:36 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor called.\n";
	this->_type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
	*this = other;
}

Dog&	Dog::operator=(const Dog& other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog default deconstructor called.\n";
	delete (this->brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wooooof!\n";
}
