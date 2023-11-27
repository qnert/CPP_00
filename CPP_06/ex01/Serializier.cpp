/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializier.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:21:50 by skunert           #+#    #+#             */
/*   Updated: 2023/11/27 19:23:51 by skunert          ###   ########.fr       */
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
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
