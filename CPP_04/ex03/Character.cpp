/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:06:32 by skunert           #+#    #+#             */
/*   Updated: 2023/11/19 13:56:06 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character default constructor called.\n";
	this->_name = "Mr. X";
	for (int i = 0; i < 3; i++)
		this->_slots[i++] = NULL;
}

Character::Character(std::string name)
{
	std::cout << "Character default constructor called.\n";
	this->_name = name;
	for (int i = 0; i < 3; i++)
		this->_slots[i++] = NULL;
}

Character::Character(const Character& other)
{
	*this = other;
}

Character&	Character::operator=(const Character& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < 4; i++)
			this->_slots[i] = other._slots[i];
	}
	return (*this);
}

Character::~Character(void)
{
	std::cout << "Character default deconstructor called.\n";
}

std::string const&	Character::getName() const
{
	return (this->_name);
}

void 	Character::equip(AMateria* m)
{
	for (int i = 0; i < 3; i++)
	{
		if (this->_slots[i] == NULL)
		{
			this->_slots[i] = m;
			return ;
		}
	}
	std::cout << "There are no free slots available!\n";
}

void	Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0)
	{
		if (this->_slots[idx] != NULL)
			this->_slots[idx] = NULL;
		else
			std::cout << "The slots you're trying to unequip is already unequiped!\n";
		return ;
	}
	std::cout << "The index entered is not between 0 and 3!\n";
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && idx >= 0)
	{
		if (this->_slots[idx] != NULL)
			this->_slots[idx]->use(target);
		else
			std::cout << "The slots you're trying to use is unequiped!\n";
		return ;
	}
	std::cout << "The index entered is not between 0 and 3!\n";
}