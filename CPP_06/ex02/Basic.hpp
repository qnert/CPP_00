/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Basic.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:33:14 by skunert           #+#    #+#             */
/*   Updated: 2024/01/06 19:56:10 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Base{
	public:
		virtual ~Base(void){}
};

class A: public Base{};

class B: public Base{};

class C: public Base{};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);
