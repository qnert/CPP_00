/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:29:44 by skunert           #+#    #+#             */
/*   Updated: 2023/12/18 17:29:47 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
