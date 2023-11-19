/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:18:09 by skunert           #+#    #+#             */
/*   Updated: 2023/11/18 12:37:23 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"

class Cure: public AMateria
{
	protected:
		std::string	_type;

	public:
		std::string const & getType() const; //Returns the materia type
		Cure* clone() const;
		void use(ICharacter& target);

	Cure(void);
	Cure(const Cure& other);
	Cure&	operator=(const Cure& other);
	~Cure(void);
};