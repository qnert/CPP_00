/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:03:01 by skunert           #+#    #+#             */
/*   Updated: 2023/11/19 18:32:59 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class AMateria;
class ICharacter;

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria*	_slots[4];

	public:
		std::string const&	getName(void) const;
		void 				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

	Character(void);
	Character(std::string name);
	Character(const Character& other);
	Character&	operator=(const Character& other);
	~Character(void);
};