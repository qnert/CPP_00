/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:33:49 by skunert           #+#    #+#             */
/*   Updated: 2023/09/04 20:09:39 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	int	i;
	Zombie *zombiehorde = new Zombie[N];

	i = 0;

	while (i < N)
	{
		zombiehorde[i].give_name(name);
		i++;
	}
	return (zombiehorde);
}