/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:58:28 by skunert           #+#    #+#             */
/*   Updated: 2023/09/08 13:13:15 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	public :
		void				setType(std::string new_type);
		const std::string&	getType();

	Weapon(void);
	Weapon(std::string type);

	private :
		std::string _type;
};

#endif