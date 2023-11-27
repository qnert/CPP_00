/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:13:56 by skunert           #+#    #+#             */
/*   Updated: 2023/11/27 19:23:29 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void): _bytes(4), _type("integer")
{}

Data::Data(Data const& other){
	*this = other;
}

Data&	Data::operator=(Data const& other){
	(void) other;
	return (*this);
}

Data::~Data(void){}

//getter functions

const int	Data::getBytes(void) const{
	return (this->_bytes);
}

const std::string	Data::getType(void) const{
	return (this->_type);
}
