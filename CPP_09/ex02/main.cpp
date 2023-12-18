/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:19:01 by skunert           #+#    #+#             */
/*   Updated: 2023/12/18 22:14:26 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//asd=$(jot -r 3000 1 2000 | sort -u | tr '\n' ' ') && ./PmergeMe $asd

#include "PmergeMe.hpp"

int	main(int ac, char** av){
	if (ac == 1){
		std::cout << "No values to perform the algoithm were found!" << std::endl;
		return (1);
	}
	PmergeMe Sorting(ac, av);
	return (0);
}
