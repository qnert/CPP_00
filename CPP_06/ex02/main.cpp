/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:44:47 by skunert           #+#    #+#             */
/*   Updated: 2023/11/29 15:13:12 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Basic.hpp"

int	main(void)
{
	Base*	ptr;
	Base*	class_A = new A;
	Base*	class_B = new B;
	Base*	class_C = new C;

	std::cout << std::endl;
	std::cout << "Random class generator and ifentifier." << std::endl;
	ptr = generate();
	identify(ptr);
	identify(*ptr);
	std::cout << std::endl;
	std::cout << "A class ifentifier." << std::endl;
	identify(class_A);
	identify(*class_A);
	std::cout << std::endl;
	std::cout << "B class ifentifier." << std::endl;
	identify(class_B);
	identify(*class_B);
	std::cout << std::endl;
	std::cout << "C class ifentifier." << std::endl;
	identify(class_C);
	identify(*class_C);
	delete ptr;
	delete class_A;
	delete class_B;
	delete class_C;
}
