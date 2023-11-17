/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:17:11 by skunert           #+#    #+#             */
/*   Updated: 2023/11/17 13:44:18 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"

class Dog : public AAnimal
{
	private:
		Brain*	brain;

	public:
		void			makeSound(void) const;
		std::string		getType(void) const;

	Dog(void);
	Dog(const Dog& other);
	Dog&	operator=(const Dog& other);
	~Dog(void);
};