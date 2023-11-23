/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:18:09 by skunert           #+#    #+#             */
/*   Updated: 2023/11/23 18:41:46 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		std::string const & getType() const; //Returns the materia type
		Cure* clone() const;
		void use(ICharacter& target);

	Cure(void);
	Cure(const Cure& other);
	Cure&	operator=(const Cure& other);
	~Cure(void);
};
