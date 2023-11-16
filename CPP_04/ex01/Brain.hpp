/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:08:24 by skunert           #+#    #+#             */
/*   Updated: 2023/11/16 15:51:30 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Brain
{
	private:
		std::string	_ideas[100];

	public:

	Brain(void);
	Brain(const Brain& other);
	Brain&	operator=(const Brain& other);
	~Brain(void);
};