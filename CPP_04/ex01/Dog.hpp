/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:17:11 by skunert           #+#    #+#             */
/*   Updated: 2023/11/16 15:59:53 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain*	brain;

	public:
		void	makeSound(void) const;

	Dog(void);
	Dog(const Dog& other);
	Dog&	operator=(const Dog& other);
	~Dog(void);
};