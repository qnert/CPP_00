/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:59:18 by skunert           #+#    #+#             */
/*   Updated: 2023/11/13 18:18:21 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		float	get_x(void);
		float	get_y(void);

		Point(void);
		~Point(void);
		Point(const float x, const float y);
		Point(Fixed const x, Fixed const y);
		Point(const Point& other);
		Point&	operator=(Point& other);

	private:
		Fixed const	_x;
		Fixed const	_y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
