/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:31:32 by skunert           #+#    #+#             */
/*   Updated: 2023/11/14 10:26:48 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					value;
		static const int	bits = 8;

	public:
		int					getRawBits( void ) const;
		void 				setRawBits( int const raw );
		float				toFloat(void) const;
		int					toInt(void) const;

	Fixed(void);
	Fixed(const int n);
	Fixed(const float n);
	~Fixed(void);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
};

std::ostream& operator<<(std::ostream &os, const Fixed& other);

#endif
