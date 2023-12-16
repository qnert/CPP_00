/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:19:54 by skunert           #+#    #+#             */
/*   Updated: 2023/12/16 18:40:19 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//helper functions
template<typename C>
bool	pairs_unsorted(C& container){
	typename C::iterator	it2 = container.begin();
	while (it2 + 2 != container.end() && it2 + 3 != container.end()){
		if (*it2 > *(it2 + 2)){
			return (true);
		}
		it2 += 2;
	}
	return (false);
}

template<typename C>
bool	find_dup(C& container, int nb){
	for (typename C::iterator it = container.begin(); it != container.end(); it++){
		if (*it == nb)
			return (true);
	}
	return (false);
}

template<typename C>
void	print_container(C& container){
	for (typename C::iterator it = container.begin(); it != container.end(); it++){
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

//Canonical Form
PmergeMe::PmergeMe(int argc, char** argv){
	int					tmp;
	std::vector<int>	vec;
	std::deque<int>		deq;

	for (int i = 1; i < argc; i++){
		tmp = std::atoi(argv[i]);
		if (tmp < 0){
			std::cout << "The entered values were invalid." << std::endl;
			std::exit(1);
		}
		if (find_dup(vec, tmp) == true || find_dup(deq, tmp) == true){
			std::cout << "Duplicate value was found." << std::endl;
			std::exit(1);
		}
		vec.push_back(tmp);
		deq.push_back(tmp);
	}
	std::cout << "Before: ";
	print_container(vec);
	this->algorithm_vector(vec);
	std::cout << "After: ";
	print_container(vec);
}

//member functions
void	PmergeMe::jacobsthal_numbers(int n){
	int	tmp;

	for (int i = 0; i < n; i++){
		tmp = ((1 << i) - (i % 2 == 0 ? 1 : -1)) / 3;
		std::cout << tmp << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::algorithm_vector(std::vector<int>& vec){
	std::vector<int>::iterator it, it2;
	if (vec.size() == 2){
		it = vec.begin();
		if (*it > *(++it))
			std::swap(*(--it), *(++it));
		return ;
	}
	for (it = vec.begin(); it + 1 != vec.end() && it + 2 != vec.end(); it++){
		if (*it < *(it + 1))
			std::swap(*it, *(it + 1));
		it += 1;
	}
	while (pairs_unsorted(vec)){
		it2 = vec.begin();
		while (it2 + 2 != vec.end() && it2 + 3 != vec.end()){
			if (*it2 > *(it2 + 2)){
				std::swap(*it2, *(it2 + 2));
				std::swap(*(it2 + 1), *(it2 + 3));
			}
			it2 += 2;
		}
	}
}
