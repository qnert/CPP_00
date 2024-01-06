/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:19:54 by skunert           #+#    #+#             */
/*   Updated: 2024/01/06 20:43:09 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include "PmergeMe.tpp"

bool	check_input(std::string str){
	for (unsigned int i = 0; i < str.size(); i++){
		if ((str[i] <'0' || str[i] > '9') && str[i] != 32){
			return (false);
		}
	}
	return (true);
}

//Canonical Form
PmergeMe::PmergeMe(int argc, char** argv){
	int					tmp;
	std::string			buff;
	std::vector<int>	vec;
	std::deque<int>		deq;

	for (int i = 1; i < argc; i++){
		std::istringstream iss(argv[i]);
		while (std::getline(iss, buff, ' ')){
			if (check_input(argv[i]) == false || std::strlen(argv[i]) == 0)
				throw(std::runtime_error("False input detected!\n"));
			tmp = std::atoi(buff.c_str());
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
