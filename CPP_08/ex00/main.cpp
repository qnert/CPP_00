/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 08:26:13 by skunert           #+#    #+#             */
/*   Updated: 2023/12/06 09:00:58 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>

int main() {
	// Test case 1: Search in a vector
	std::cout << "Test case with a vector as container." << std::endl;
	std::vector<int> vec;
	for (int i = 0; i < 6; i++){
		vec.push_back(i + 1);
	}
	try {
		int get = easyfind(vec, 3);
		std::cout << "Value found at position: " << get << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what();
	}

	std::cout << std::endl << "Test case with a list as container." << std::endl;
	std::list<int> lst;
	for (int i = 0; i < 6; i++){
		lst.push_back(i + 1);
	}
	try {
		int get = easyfind(lst, 3);
		std::cout << "Value found at position: " << get << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what();
	}

	std::cout << std::endl << "Test case with a deque as container." << std::endl;
	std::deque<int> deq1;
	for (int i = 0; i < 6; i++){
		deq1.push_back(i + 1);
	}
	try {
		int get = easyfind(deq1, 3);
		std::cout << "Value found at position: " << get << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what();
	}

	std::cout << std::endl << "Test case with a deque as container but value is not inside of it." << std::endl;
	std::deque<int> deq2;
	for (int i = 0; i < 6; i++){
		deq2.push_back(i + 8);
	}
	try {
		int get = easyfind(deq2, 3);
		std::cout << "Value found at position: " << get << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what();
	}
	return 0;
}