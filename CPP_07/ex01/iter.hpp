/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:32:54 by skunert           #+#    #+#             */
/*   Updated: 2023/11/28 16:43:58 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define CYNHB "\e[0;106m"
#define RESET "\e[0m"

template <typename T_arr, typename T_len, typename T_func>

void	iter(T_arr arr, T_len len, T_func* func_ptr){
	for (int i = 0; i < len; i++)
		func_ptr(arr[i]);
}
