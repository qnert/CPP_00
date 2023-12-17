/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:19:45 by skunert           #+#    #+#             */
/*   Updated: 2023/12/17 18:37:26 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>

class PmergeMe{
	public:
		std::vector<int>	jacobsthal_numbers(int n);
		void				algorithm_vector(std::vector<int>& lst);
		void				algorithm_deque(std::deque<int>& deq);

	PmergeMe(int argc, char** argv);
	// PmergeMe(PmergeMe const& other);
	// PmergeMe&	operator=(PmergeMe const& other);
	// ~PmergeMe(void);
};
