/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:11:14 by skunert           #+#    #+#             */
/*   Updated: 2023/11/16 12:40:23 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		void			makeSound(void) const;
		std::string		getType(void) const;

	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal&	operator=(const WrongAnimal& other);
	~WrongAnimal(void);
};