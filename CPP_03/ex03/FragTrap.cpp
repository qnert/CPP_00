/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:59:26 by skunert           #+#    #+#             */
/*   Updated: 2023/11/23 13:58:46 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	this->_name = "Mr. X";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap default constructor called.\n";
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap param (" << name <<") constructor called.\n";
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called.\n";
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	this->is_guarding = other.is_guarding;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap copy assignment operator called.\n";
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

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap default deconstructor called.\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrag named " << this->_name << " demands a high five!\n";
}

int	FragTrap::getAttackDamage(void)
{
	return (this->_attack_damage);
}
