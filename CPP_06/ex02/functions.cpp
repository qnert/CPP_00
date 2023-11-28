/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:37:53 by skunert           #+#    #+#             */
/*   Updated: 2023/11/28 15:05:06 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Basic.hpp"

Base*	generate(void){
	std::random_device rd;
	std::mt19937 gen(rd());

	std::uniform_int_distribution<int> distribution(0, 2);
	int	n = distribution(gen);
	switch (n){
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	return (NULL);
}

void	identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "Pointer type: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Pointer type: B" << std::endl;
	else
		std::cout << "Pointer type: C" << std::endl;
}

void identify(Base& p){
	Base	check;
	try{
		check = dynamic_cast<A&>(p);
		std::cout << "Reference type: A" << std::endl;
	}
	catch(std::exception& e){
		try{
			check = dynamic_cast<B&>(p);
			std::cout << "Reference type: B" << std::endl;
		}
		catch(std::exception& e){
			try{
				check = dynamic_cast<C&>(p);
				std::cout << "Reference type: C" << std::endl;
			}
			catch(std::exception& e){
				std::cout << "No valid reference passed." << std::endl;
			}
		}
	}
}
