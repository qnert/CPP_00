/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:19:54 by skunert           #+#    #+#             */
/*   Updated: 2023/12/18 15:24:18 by skunert          ###   ########.fr       */
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
	clock_t start = clock();
	this->algorithm_vector(vec);
	clock_t end = clock();
	std::cout << "After: ";
	print_container(vec);
	double duration = static_cast<double>(end - start) * 1000.0 / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << duration << " ms" <<std::endl;
	start = clock();
	this->algorithm_deque(deq);
	end = clock();
	duration = static_cast<double>(end - start) * 1000.0 / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << vec.size() << " elements with std::deque : " << duration << " ms" <<std::endl;
}

PmergeMe::PmergeMe(PmergeMe const& other){
	*this = other;
}

PmergeMe&	PmergeMe::operator=(PmergeMe const& other){
	(void) other;
	return (*this);
}

PmergeMe::~PmergeMe(void){}

//member functions
std::vector<int>	PmergeMe::jacobsthal_numbers(int n){
	int	tmp;
	std::vector<int>	vec;

	for (int i = 0; i < n; i++){
		tmp = ((1 << i) - (i % 2 == 0 ? 1 : -1)) / 3;
		vec.push_back(tmp);
	}
	return (vec);
}

void	PmergeMe::algorithm_vector(std::vector<int>& vec){
	std::vector<int>	main, pend;
	std::vector<int>::iterator it, it2;
	if (vec.size() == 1)
		return ;
	if (vec.size() == 2){
		it = vec.begin();
		if (*it > *(++it))
			std::swap(*(--it), *(++it));
		return ;
	}
	for (it = vec.begin(); it != vec.end() && it + 1 != vec.end(); it+=2){
		if (*it < *(it + 1))
			std::swap(*it, *(it + 1));
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
	unsigned int	i = 1;
	for (it = vec.begin(); it != vec.end(); it++){
		if (i % 2)
			main.push_back(*it);
		else
			pend.push_back(*it);
		i++;
	}
	if (pend[0] < main[0])
		main.insert(main.begin(), pend[0]);
	int	tmp;
	unsigned int	min = 1;
	vec = jacobsthal_numbers(15);
	for (it = vec.begin() + 3; it != vec.end(); it++){
		i = *it;
		tmp = i;
		while (i > 0 && min < i){
			if (i <= pend.size())
				main.insert(std::lower_bound(main.begin(), main.end(), pend[i - 1]), pend[i - 1]);
			i--;
		}
		min = tmp;
	}
	if (!std::is_sorted(main.begin(), main.end())){
		main.insert(std::lower_bound(main.begin(), main.end(), main[main.size() - 1]), main[main.size() - 1]);
		main.pop_back();
	}
	vec = main;
}

void	PmergeMe::algorithm_deque(std::deque<int>& deq){
	std::deque<int>	main, pend;
	std::deque<int>::iterator it, it2;
	if (deq.size() == 1)
		return ;
	if (deq.size() == 2){
		it = deq.begin();
		if (*it > *(++it))
			std::swap(*(--it), *(++it));
		return ;
	}
	for (it = deq.begin(); it != deq.end() && it + 1 != deq.end(); it+=2){
		if (*it < *(it + 1))
			std::swap(*it, *(it + 1));
	}
	while (pairs_unsorted(deq)){
		it2 = deq.begin();
		while (it2 + 2 != deq.end() && it2 + 3 != deq.end()){
			if (*it2 > *(it2 + 2)){
				std::swap(*it2, *(it2 + 2));
				std::swap(*(it2 + 1), *(it2 + 3));
			}
			it2 += 2;
		}
	}
	unsigned int	i = 1;
	for (it = deq.begin(); it != deq.end(); it++){
		if (i % 2)
			main.push_back(*it);
		else
			pend.push_back(*it);
		i++;
	}
	if (pend[0] < main[0])
		main.insert(main.begin(), pend[0]);
	int	tmp;
	unsigned int	min = 1;
	std::vector<int> vec = jacobsthal_numbers(15);
	for (it = deq.begin() + 3; it != deq.end(); it++){
		i = *it;
		tmp = i;
		while (i > 0 && min < i){
			if (i <= pend.size())
				main.insert(std::lower_bound(main.begin(), main.end(), pend[i - 1]), pend[i - 1]);
			i--;
		}
		min = tmp;
	}
	if (!std::is_sorted(main.begin(), main.end())){
		main.insert(std::lower_bound(main.begin(), main.end(), main[main.size() - 1]), main[main.size() - 1]);
		main.pop_back();
	}
	deq = main;
}
