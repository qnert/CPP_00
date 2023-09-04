/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:27:00 by skunert           #+#    #+#             */
/*   Updated: 2023/09/04 18:48:04 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *Z = newZombie("Florian");
	randomChump("Simon");
	Zombie Z2;
	Zombie Z3("Fritz");
	Z->announce();
	Z3.announce();
	delete (Z);
	return (0);
}