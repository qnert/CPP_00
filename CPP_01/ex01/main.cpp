/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:41:42 by skunert           #+#    #+#             */
/*   Updated: 2023/09/04 19:57:33 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int	main(void)
{
	int	i;
	Zombie *zombiehorde = zombieHorde(10, "Fritz");

	i = 0;
	while (i < 10)
	{
		zombiehorde[i].announce();
		i++;
	}
	delete[] zombiehorde;
	return (0);
}