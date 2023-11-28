/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Basic.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:33:14 by skunert           #+#    #+#             */
/*   Updated: 2023/11/28 15:05:48 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <random>

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
