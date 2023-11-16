/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 06:16:29 by skunert           #+#    #+#             */
/*   Updated: 2023/11/16 10:55:28 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap SC1("John");

	SC1.attack("Trash");
	SC1.takeDamage(5);
	SC1.beRepaired(100);
	for (int i = 0; i < 48; i++)
		SC1.attack("anyone");
	SC1.attack("his evaluator");
	SC1.guardGate();
	return (0);
}
