/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:20:48 by skunert           #+#    #+#             */
/*   Updated: 2023/11/28 16:27:47 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>

void	swap(T& a, T& b){
	T	tmp = a;

	a = b;
	b = tmp;
}

template <typename T>

T	min(T a, T b){
	if (a > b)
		return (b);
	else
		return (a);
}

template <typename T>

T	max(T a, T b){
	if (a > b)
		return (a);
	else
		return (b);
}
