/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:48:15 by skunert           #+#    #+#             */
/*   Updated: 2023/11/13 18:40:57 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	triangle_area(Point a, Point b, Point c)
{
	float	area = (b.get_x() - a.get_x()) * (c.get_y() - a.get_y()) - (c.get_x() - a.get_x()) * (b.get_y() - a.get_y());
	if (area < 0)
		return ((area / 2) * -1);
	else
		return (area / 2);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	area = triangle_area(a, b, c);
	float	sum_of_triangles = 0;

	sum_of_triangles += triangle_area(a, b, point);
	sum_of_triangles += triangle_area(a, c, point);
	sum_of_triangles += triangle_area(b, c, point);
	if (area == sum_of_triangles)
		return (true);
	return (false);
}
