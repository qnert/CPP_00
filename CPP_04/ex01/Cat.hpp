/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:24:28 by skunert           #+#    #+#             */
/*   Updated: 2023/11/16 15:59:17 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain*	brain;

	public:
		void	makeSound(void) const;

	Cat(void);
	Cat(const Cat& other);
	Cat&	operator=(const Cat& other);
	~Cat(void);
};