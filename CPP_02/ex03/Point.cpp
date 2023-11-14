/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:04:15 by skunert           #+#    #+#             */
/*   Updated: 2023/11/14 10:38:35 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0){
}

Point::~Point(void){
}

Point::Point(const float x, const float y) : _x(x), _y(y){
}

Point::Point(const Point& other) :_x(other._x), _y(other._y){
}

Point& Point::operator=(Point& other)
{
	return (other);
}

float	Point::get_x(void)
{
	return (this->_x.toFloat());
}

float	Point::get_y(void)
{
	return (this->_y.toFloat());
}
