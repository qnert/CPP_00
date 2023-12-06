/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:41:03 by skunert           #+#    #+#             */
/*   Updated: 2023/12/06 16:06:58 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <class T>
class MutantStack: public std::stack<T>{
	private:

	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();

	MutantStack(void);
	MutantStack(MutantStack const &other);
	MutantStack&	operator=(MutantStack const& other);
	~MutantStack();
};