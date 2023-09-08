/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:27:03 by skunert           #+#    #+#             */
/*   Updated: 2023/09/08 13:22:51 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private :
		std::string	_name;
		Weapon&		_weapon;

	public :
		void	attack(void);
		void	setWeapon(Weapon weapon);

	HumanA(std::string name, Weapon& weapon);
};

#endif