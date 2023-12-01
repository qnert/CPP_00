/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:32:54 by skunert           #+#    #+#             */
/*   Updated: 2023/12/01 15:05:32 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define CYNHB "\e[0;106m"
#define RESET "\e[0m"

#include <iostream>

template <typename T_arr, typename T_func>
void	iter(T_arr* arr, size_t len, T_func func){
	for (size_t i = 0; i < len; i++)
		func(arr[i]);
}
