/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:36:19 by skunert           #+#    #+#             */
/*   Updated: 2023/11/23 15:42:51 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap default constructor called.\n";
	this->_name = "Mr. X";
	this->ClapTrap::_name = "Mr. X_clap_name";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	FragTrap	tmp;
	this->_attack_damage = tmp.getAttackDamage();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap param (" << name <<") constructor called.\n";
	this->ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	FragTrap	tmp;
	this->_attack_damage = tmp.getAttackDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	std::cout << "DiamondTrap copy constructor called.\n";
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "DiamondTrap copy assignment operator called.\n";
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap default destructor called.\n";
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap named " << this->_name << " and his ClapTrap name "
		<< this->ClapTrap::_name << std::endl;
}


