/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:07:24 by skunert           #+#    #+#             */
/*   Updated: 2023/11/28 17:14:27 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>

class Array{
	private:
		T* arr;

	public:
		void	size(void);

	Array(void);
	Array(int n);
	Array(Array const& other);
	Array&	operator=(Array const& other);
	~Array(void);
};
