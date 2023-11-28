/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:21:50 by skunert           #+#    #+#             */
/*   Updated: 2023/11/28 14:19:21 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void){}

Serializer::Serializer(Serializer const& other){
	*this = other;
}

Serializer&	Serializer::operator=(Serializer const& other){
	(void) other;
	return (*this);
}

Serializer::~Serializer(void) {}

//member functions
uintptr_t Serializer::serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}
