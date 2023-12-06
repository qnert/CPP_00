/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:24:53 by skunert           #+#    #+#             */
/*   Updated: 2023/12/06 12:26:02 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	right_use(void){
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.printSpan();
	std::cout << "The size of the Span is " << sp.size() << std::endl;
	std::cout << "The shortest Span of the instance is " << sp.shortestSpan() << std::endl;
	std::cout << "The longest Span of the instance is " << sp.longestSpan() << std::endl;
}

void	right_addRange(void){
	try{
		Span sp = Span(100);
		std::cout << "Add 95 integer with value 42" << std::endl;
		sp.addRange(42, 95);
		sp.printSpan();
		std::cout << "Current amount of the span is " << sp.get_curr_amount() << std::endl;
		std::cout << std::endl;
		std::cout << "Add 1 integer with value 0" << std::endl;
		sp.addNumber(0);
		sp.printSpan();
		std::cout << "Current amount of the span is " << sp.get_curr_amount() << std::endl;
		std::cout << std::endl;
		std::cout << "Add 4 integer with the value 42" << std::endl;
		sp.addRange(42, 4);
		sp.printSpan();
		std::cout << "Current amount of the span is " << sp.get_curr_amount() << std::endl;
		std::cout << std::endl;
		std::cout << "The size of the Span is " << sp.size() << std::endl;
		std::cout << "The shortest Span of the instance is " << sp.shortestSpan() << std::endl;
		std::cout << "The longest Span of the instance is " << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e){
		std::cout << e.what();
	}
}

void	false_addNumber(void){
	try{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(56);
	}
	catch (std::exception& e){
		std::cout << e.what();
	}
}

void	false_shortestSpan(void){
	try{
		Span sp = Span(0);
		sp.shortestSpan();
	}
	catch (std::exception& e){
		std::cout << e.what();
	}
}

void	false_longestSpan(void){
	try{
		Span sp = Span(1);
		sp.addNumber(6);
		sp.longestSpan();
	}
	catch (std::exception& e){
		std::cout << e.what();
	}
}

int	main(void){
	std::cout << YELHB << "Right use" << RESET << std::endl;
	right_use();
	std::cout << std::endl;
	std::cout << YELHB << "Right addRange function use" << RESET << std::endl;
	right_addRange();
	std::cout << std::endl;
	std::cout << YELHB << "False addNumber function use" << RESET << std::endl;
	false_addNumber();
	std::cout << std::endl;
	std::cout << YELHB << "False shortestSpan function use" << RESET << std::endl;
	false_shortestSpan();
	std::cout << std::endl;
	std::cout << YELHB << "False longestSpan function use" << RESET << std::endl;
	false_longestSpan();
	return (0);
}