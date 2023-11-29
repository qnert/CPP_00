/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:07:24 by skunert           #+#    #+#             */
/*   Updated: 2023/11/29 13:22:14 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array{
	private:
		T*		_arr;
		size_t	_size;

	public:
		class IndexOutOfRange: public std::exception{
			public:
				virtual const char*	what() const throw();
		};
		size_t	size(void);

	Array(void);
	Array(unsigned int n);
	Array(Array const& other);
	Array&	operator=(Array const& other);
	T&		operator[](size_t index);
	~Array(void);
};

#endif
