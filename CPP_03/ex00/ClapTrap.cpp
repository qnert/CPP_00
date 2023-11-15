/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 05:45:59 by skunert           #+#    #+#             */
/*   Updated: 2023/11/15 11:23:26 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->_name = "Mr. X";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << this->_name << " spawned.\n";
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << this->_name << " spawned.\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name << " has died!\n";
}

//member functions
void	ClapTrap::attack(const std::string& target)
{
	if (this->_hit_points > 0 && this->_energy_points > 0)
	{
		std::cout << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!\n";
		this->_energy_points -= 1;
	}
	else if (this->_hit_points <= 0)
		std::cout << this->_name << " cannot attack because he has no health left.\n";
	else if (this->_energy_points <= 0)
		std::cout << this->_name << " has not enough energy to attack.\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points > 0)
	{
		std::cout << this->_name << " has taken " << amount << " damage!\n";
		this->_hit_points -= amount;
	}
	else
		std::cout << this->_name << " has no health left.\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points > 0 && this->_energy_points > 0)
	{
		this->_hit_points += amount;
		this->_energy_points -= 1;
		std::cout << this->_name << " has been repaired by " << amount << " points.\n";
	}
	else if (this->_hit_points <= 0)
		std::cout << this->_name << " has not enough health to be repaired.\n";
	else if (this->_energy_points <= 0)
		std::cout << this->_name << " has not enough energy to be repaired.\n";
}