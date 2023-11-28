/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:13:56 by skunert           #+#    #+#             */
/*   Updated: 2023/11/28 12:50:32 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void): _bytes(4), _type("integer")
{}

Data::Data(std::string type, int bytes):  _bytes(bytes), _type(type)
{};

Data::Data(Data const& other): _bytes(other.getBytes()){
	*this = other;
}

Data&	Data::operator=(Data const& other){
	(void) other;
	return (*this);
}

Data::~Data(void){}

//getter functions

int	Data::getBytes(void) const{
	return (this->_bytes);
}

const std::string	Data::getType(void) const{
	return (this->_type);
}

std::ostream&	operator<<(std::ostream& os, Data const& other)
{
	os << "Data instance with the type " << other.getType() << " and with a byte value of " << other.getBytes()
	<< std::endl;
	return (os);
}
