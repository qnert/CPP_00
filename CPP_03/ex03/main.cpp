/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:00:45 by skunert           #+#    #+#             */
/*   Updated: 2023/11/21 18:43:59 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap DT1("Walter");

	std::cout << std::endl;
	DT1.whoAmI();
	DT1.attack("his evaluator");
	DT1.guardGate();
	DT1.beRepaired(1);
	for (int i = 0; i < 4; i++)
		DT1.attack("a stone");
	DT1.beRepaired(50);
	DT1.whoAmI();
	std::cout << std::endl;
}