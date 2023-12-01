/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:32:46 by skunert           #+#    #+#             */
/*   Updated: 2023/12/01 15:09:11 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	increase(int& nb)
{
	nb++;
}

void	add_not_prefix(std::string& str)
{
	str = "not_" + str;
}

int	main(void)
{
	int	int_len = 9;
	int int_arr[9] = {1,2,3,4,5,6,7,8,9};
	std::string str_arr[3] = {"good", "healthy", "muscular"};

	//use case with integer
	std::cout << CYNHB << "(int)before iter functioncall" << RESET << std::endl;
	for (int i = 0; i < int_len; i++)
		std::cout << int_arr[i] << std::endl;
	std::cout << std::endl;
	std::cout << CYNHB << "(int)iter functioncall" << RESET << std::endl;
	std::cout << std::endl;

	iter(int_arr, int_len, increase);
	std::cout << CYNHB << "(int)after iter functioncall" << RESET << std::endl;
	for (int i = 0; i < int_len; i++)
		std::cout << int_arr[i] << std::endl;

	std::cout << std::endl;
	//use case with std::string
	std::cout << CYNHB << "(str)before iter functioncall" << RESET << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << str_arr[i] << std::endl;
	std::cout << std::endl;
	std::cout << CYNHB << "(str)iter functioncall" << RESET << std::endl;
	std::cout << std::endl;

	iter(str_arr, 3, add_not_prefix);
	std::cout << CYNHB << "(str)after iter functioncall" << RESET << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << str_arr[i] << std::endl;
}


//eval test
// class Awesome{
// 	public:
// 		Awesome(void): _n(42) {return;}
// 		int	get(void) const {return (this->_n);}

// 	private:
// 		int	_n;
// };

// std::ostream&	operator<<(std::ostream& os, Awesome const& other){
// 	std::cout << other.get(); return (os);
// }

// template<typename T>
// void print(T const& other) {std::cout << other << std::endl; return ;}

// int	main(void){
// 	int	tab[] = {0, 1, 2, 3, 4};
// 	Awesome	tab2[5];

// 	iter(tab, 5, print<int>);
// 	iter(tab2, 5, print<Awesome>);
// 	return (0);
// }