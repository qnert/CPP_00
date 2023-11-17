/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:11:14 by skunert           #+#    #+#             */
/*   Updated: 2023/11/16 15:59:25 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
	protected:
		std::string _type;

	public:
		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;

	AAnimal(void);
	AAnimal(const AAnimal& other);
	AAnimal&	operator=(const AAnimal& other);
	virtual	~AAnimal(void);
};