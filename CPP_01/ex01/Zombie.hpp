/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:06:02 by skunert           #+#    #+#             */
/*   Updated: 2023/10/02 14:01:35 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public :
		void	announce(void);
		void	give_name(std::string name);

	Zombie(void);
	Zombie(std::string name);
	~Zombie();

	private :
		std::string _name;
};

Zombie *zombieHorde(int N, std::string name);

#endif
