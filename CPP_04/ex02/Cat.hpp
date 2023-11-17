/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:24:28 by skunert           #+#    #+#             */
/*   Updated: 2023/11/17 13:44:28 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"

class Cat : public AAnimal
{
	private:
		Brain*	brain;

	public:
		void			makeSound(void) const;
		std::string		getType(void) const;

	Cat(void);
	Cat(const Cat& other);
	Cat&	operator=(const Cat& other);
	~Cat(void);
};