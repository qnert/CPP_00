/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:19:45 by skunert           #+#    #+#             */
/*   Updated: 2023/12/16 18:11:36 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

class PmergeMe{
	public:
		void	jacobsthal_numbers(int n);
		void	algorithm_vector(std::vector<int>& lst);

	PmergeMe(int argc, char** argv);
	// PmergeMe(PmergeMe const& other);
	// PmergeMe&	operator=(PmergeMe const& other);
	// ~PmergeMe(void);
};
