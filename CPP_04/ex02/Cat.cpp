/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:24:10 by skunert           #+#    #+#             */
/*   Updated: 2023/11/19 14:08:12 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal()
{
	std::cout << "Cat default constructor called.\n";
	this->_type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat& other) : AAnimal(other)
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
	std::cout << "Cat default deconstructor called.\n";
	delete (this->brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meeeooow!\n";
}

std::string		Cat::getType(void) const
{
	return (this->_type);
}