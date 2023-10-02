/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:33:36 by skunert           #+#    #+#             */
/*   Updated: 2023/10/02 14:53:19 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private :
		std::string	_name;
		Weapon*		_weapon;

	public :
		void	attack(void);
		void	setWeapon(Weapon& weapon);

	HumanB(std::string name);
};

#endif
