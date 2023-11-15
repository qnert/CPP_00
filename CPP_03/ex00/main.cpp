/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 06:16:29 by skunert           #+#    #+#             */
/*   Updated: 2023/11/11 06:23:01 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap P1("Hans");
	ClapTrap P2("Peter");
	ClapTrap P3;

	P1.attack("Peter");
	P2.takeDamage(9);
	P2.beRepaired(5);
	P2.attack("Hans");

	P1.takeDamage(5);
	for (int i = 0; i < 8; i++)
		P2.attack("Hans");
	P2.attack("Mr. X");
	P3.attack("his evaluator");
}
