/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:31:32 by skunert           #+#    #+#             */
/*   Updated: 2023/11/10 15:13:43 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					value;
		static const int	bits = 8;

	public:
		int					getRawBits( void ) const;
		void 				setRawBits( int const raw );

	Fixed(int n);
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
};

#endif