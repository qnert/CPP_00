/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 06:16:29 by skunert           #+#    #+#             */
/*   Updated: 2023/11/15 11:18:44 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap FC1("John");

	FC1.attack("Trash");
	FC1.takeDamage(5);
	FC1.beRepaired(100);
	FC1.highFivesGuys();
	return (0);
}
