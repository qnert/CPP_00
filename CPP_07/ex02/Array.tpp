/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:46:44 by skunert           #+#    #+#             */
/*   Updated: 2023/11/28 18:52:07 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>

Array<T>::Array(void){
	this._arr = new T[0];
}

Array<T>::Array(int n){
	this._arr = new T[n];
}

	// Array(Array const& other);
	// Array&	operator=(Array const& other);
	// ~Array(void);
