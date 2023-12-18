/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:19:54 by skunert           #+#    #+#             */
/*   Updated: 2023/12/18 17:28:23 by skunert          ###   ########.fr       */
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

template<typename C>
void	pair_up_and_sort(C& container){
	typename C::iterator it, it2;
	for (it = container.begin(); it != container.end() && it + 1 != container.end(); it+=2){
		if (*it < *(it + 1))
			std::swap(*it, *(it + 1));
	}
	while (pairs_unsorted(container)){
		it2 = container.begin();
		while (it2 + 2 != container.end() && it2 + 3 != container.end()){
			if (*it2 > *(it2 + 2)){
				std::swap(*it2, *(it2 + 2));
				std::swap(*(it2 + 1), *(it2 + 3));
			}
			it2 += 2;
		}
	}
}

template<typename C>
void	create_main_and_pend_chain(C& main_container, C& container1, C& container2, int i){
	for (typename C::iterator it = main_container.begin(); it != main_container.end(); it++){
		if (i % 2)
			container1.push_back(*it);
		else
			container2.push_back(*it);
		i++;
	}
	if (container2[0] < container1[0])
		container1.insert(container1.begin(), container2[0]);
}

template<typename C>
void	insert_pend_into_main(C& container1, C& container2, unsigned int i){
	int	tmp;
	unsigned int	min = 1;
	std::vector<int> vec = PmergeMe::jacobsthal_numbers(15);
	for (std::vector<int>::iterator it = vec.begin() + 3; it != vec.end(); it++){
		i = *it;
		tmp = i;
		while (i > 0 && min < i){
			if (i <= container2.size())
				container1.insert(std::lower_bound(container1.begin(), container1.end(), container2[i - 1]), container2[i - 1]);
			i--;
		}
		min = tmp;
	}
	if (!std::is_sorted(container1.begin(), container1.end())){
		container1.insert(std::lower_bound(container1.begin(), container1.end(), container1[container1.size() - 1]), container1[container1.size() - 1]);
		container1.pop_back();
	}
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
	unsigned int	i = 1;
	std::vector<int>	main, pend;
	std::vector<int>::iterator it;
	if (vec.size() == 1)
		return ;
	if (vec.size() == 2){
		it = vec.begin();
		if (*it > *(++it))
			std::swap(*(--it), *(++it));
		return ;
	}
	pair_up_and_sort(vec);
	create_main_and_pend_chain(vec, main, pend, i);
	insert_pend_into_main(main, pend, i);
	vec = main;
}

void	PmergeMe::algorithm_deque(std::deque<int>& deq){
	unsigned int	i = 1;
	std::deque<int>	main, pend;
	std::deque<int>::iterator it;
	if (deq.size() == 1)
		return ;
	if (deq.size() == 2){
		it = deq.begin();
		if (*it > *(++it))
			std::swap(*(--it), *(++it));
		return ;
	}
	pair_up_and_sort(deq);
	create_main_and_pend_chain(deq, main, pend, i);
	insert_pend_into_main(main, pend, i);
	deq = main;
}
