/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 06:16:29 by skunert           #+#    #+#             */
/*   Updated: 2023/11/15 09:54:33 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap SC1("John");

	SC1.attack("Trash");
	SC1.takeDamage(5);
	SC1.beRepaired(100);
	int i = 0;
	while (i < 50) {
		std::cout << "  ";
		SC1.attack("Nothing");
		i++;
	}
	SC1.guardGate();
	return (0);
}
