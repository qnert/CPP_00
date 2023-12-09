/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:43:29 by skunert           #+#    #+#             */
/*   Updated: 2023/12/09 14:40:09 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "MutantStack.hpp"

template <class T>
MutantStack<T>::MutantStack(void): std::stack<T>(){};

template <class T>
MutantStack<T>::MutantStack(MutantStack const &other): std::stack<T>(other){
	*this = other;
}

template <class T>
MutantStack<T>&	MutantStack<T>::operator=(MutantStack const& other){
	if (this != &other)
		std::stack<T>::operator=(other);
	return (*this);
}

template <class T>
MutantStack<T>::~MutantStack(){};

template <class T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(){
	return (this->c.begin());
}

template <class T>
typename MutantStack<T>::iterator	MutantStack<T>::end(){
	return (this->c.end());
}
