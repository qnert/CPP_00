/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:26:47 by skunert           #+#    #+#             */
/*   Updated: 2023/11/23 18:41:50 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		std::string const & getType() const; //Returns the materia type
		Ice* clone() const;
		void use(ICharacter& target);

	Ice(void);
	Ice(const Ice& other);
	Ice&	operator=(const Ice& other);
	~Ice(void);
};
