/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:25:20 by skunert           #+#    #+#             */
/*   Updated: 2023/11/23 15:57:51 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal*	pets[6];

	for (int i = 0; i < 6; i++)\
	{
		if (i > 2)
			pets[i] = new Cat;
		else
			pets[i] = new Dog;
	}

	for (int i = 0; i < 6; i++)
		pets[i]->makeSound();

	for (int i = 0; i < 6; i++)
		delete (pets[i]);
	// system("leaks pets");
	return 0;
}
