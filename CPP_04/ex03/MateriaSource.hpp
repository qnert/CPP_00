/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:46:13 by skunert           #+#    #+#             */
/*   Updated: 2023/11/19 18:40:07 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

#include "Ice.hpp"
#include "Cure.hpp"

class IMateriaSource;
class AMateria;
class MateriaSource: public IMateriaSource
{
	private:
		AMateria*	_slots[4];
	public:
		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);

	MateriaSource(void);
	MateriaSource(const MateriaSource& other);
	MateriaSource&	operator=(const MateriaSource& other);
	~MateriaSource(void);
};