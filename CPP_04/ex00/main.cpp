/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:25:20 by skunert           #+#    #+#             */
/*   Updated: 2023/11/23 15:49:51 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* D1 = new Dog();
	const Animal* C1 = new Cat();
	std::cout << std::endl;
	std::cout << D1->getType() << " " << std::endl;
	std::cout << C1->getType() << " " << std::endl;
	C1->makeSound();  // will output the cat sound!
	D1->makeSound();
	meta->makeSound();

	std::cout << std::endl;

	delete meta;
	delete D1;
	delete C1;

	std::cout << std::endl;

	const WrongAnimal* meta2 = new WrongAnimal();
	const Animal* D2 = new Dog();
	const WrongAnimal* C2 = new WrongCat();
	std::cout << std::endl;
	std::cout << D2->getType() << " " << std::endl;
	std::cout << C2->getType() << " " << std::endl;
	C2->makeSound();	// should output the wronganimal sound to show the effect of virtual funcs
	D2->makeSound();
	meta2->makeSound();

	std::cout << std::endl;
	delete meta2;
	delete D2;
	delete C2;

	std::cout << std::endl;

	Animal	meta3;
	Dog		D3;
	Cat		C3;

	std::cout << std::endl;
	D3.makeSound();
	C3.makeSound();
	std::cout << meta3.getType() << std::endl;
	meta3.makeSound();
	std::cout << std::endl;
	// system("leaks pets");
  return 0;
}
