/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:44:34 by skunert           #+#    #+#             */
/*   Updated: 2023/11/23 15:43:00 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->_name = "Mr. X";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->is_guarding = false;
	std::cout << "ScavTrap default constructor called.\n";
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->is_guarding = false;
	std::cout << "ScavTrap param (" << name <<") constructor called.\n";
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	this->is_guarding = other.is_guarding;
	std::cout << "ScavTrap copy constructor called.\n";
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap copy assignment operator called.\n";
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
		this->is_guarding = other.is_guarding;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap default destructor called.\n";
}

void	ScavTrap::guardGate(void)
{
	if (this->is_guarding == false)
	{
		this->is_guarding = true;
		std::cout << this->_name << " is now in Gate keeper mode.\n";
	}
	else
		std::cout << this->_name << " is already in Gate keeper mode.\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hit_points > 0 && this->_energy_points > 0)
	{
		std::cout << "ScavTrap named " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!\n";
		this->_energy_points -= 1;
	}
	else if (this->_hit_points <= 0)
		std::cout << this->_name << " cannot attack because he has no health left.\n";
	else if (this->_energy_points <= 0)
		std::cout << this->_name << " has not enough energy to attack.\n";
}
