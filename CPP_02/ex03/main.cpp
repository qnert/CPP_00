/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:33:33 by skunert           #+#    #+#             */
/*   Updated: 2023/11/13 19:40:09 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void) {
	// Triangle
	Point a = Point(10, 3);
	Point b = Point(4, 5);
	Point c = Point(8, -2);

	//first points
	Point p1 = Point(5, 4.67f);

	//second points
	Point p2 = Point(9.5f, 2.5f);

	//third points
	Point p3 = Point(5.42f, 2.53f);

	std::cout << "p1: " << std::boolalpha << bsp(a, b, c, p1) << std::endl;
	std::cout << "p2: " << std::boolalpha << bsp(a, b, c, p2) << std::endl;
	std::cout << "p3: " << std::boolalpha << bsp(a, b, c, p3) << std::endl;
	return (0);
}
