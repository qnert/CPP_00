/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:19:01 by skunert           #+#    #+#             */
/*   Updated: 2023/12/17 18:27:38 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char** av){
	if (ac == 1){
		std::cout << "No values to perform the algoithm were found!" << std::endl;
		return (1);
	}
	PmergeMe Sorting(ac, av);
	return (0);
}
