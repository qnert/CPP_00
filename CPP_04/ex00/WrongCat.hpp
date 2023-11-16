/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:24:28 by skunert           #+#    #+#             */
/*   Updated: 2023/11/16 12:42:10 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		void	makeSound(void) const;

	WrongCat(void);
	WrongCat(const WrongCat& other);
	WrongCat&	operator=(const WrongCat& other);
	~WrongCat(void);
};