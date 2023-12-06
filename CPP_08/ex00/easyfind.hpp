/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 08:26:36 by skunert           #+#    #+#             */
/*   Updated: 2023/12/06 09:07:59 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>

template <typename Container>
int	easyfind(Container c, int to_find){
	typename Container::iterator check = std::find(c.begin(), c.end(), to_find);
	if (check != c.end())
		return (std::distance(c.begin(), check));
	else
		throw (std::runtime_error("Value was not found inside the container!\n"));
}