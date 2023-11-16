/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:11:14 by skunert           #+#    #+#             */
/*   Updated: 2023/11/16 12:40:23 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string _type;

	public:
		virtual void	makeSound(void) const;
		std::string		getType(void) const;

	Animal(void);
	Animal(const Animal& other);
	Animal&	operator=(const Animal& other);
	virtual	~Animal(void);
};