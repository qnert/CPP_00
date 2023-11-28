/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:13:12 by skunert           #+#    #+#             */
/*   Updated: 2023/11/28 14:20:57 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data D1("integer", 4);
	Data*	conversion_back;
	uintptr_t	conversion_ptr;

	std::cout << D1;
	std::cout << &D1 << std::endl;
	conversion_ptr = Serializer::serialize(&D1);
	conversion_back = Serializer::deserialize(conversion_ptr);
	std::cout << *conversion_back;
	std::cout << conversion_back << std::endl;
}
