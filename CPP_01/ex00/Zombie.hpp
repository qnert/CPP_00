/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:06:02 by skunert           #+#    #+#             */
/*   Updated: 2023/10/02 13:42:05 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public :
		void	announce(void);

	Zombie(void);
	Zombie(std::string name);
	~Zombie();

	private :
		std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
