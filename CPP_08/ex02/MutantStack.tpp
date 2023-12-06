/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:43:29 by skunert           #+#    #+#             */
/*   Updated: 2023/12/06 15:31:14 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <class T, class Container>
MutantStack<T, Container>::MutantStack(void): std::stack<T, Container>(){};

template <class T, class Container>
MutantStack<T, Container>::MutantStack(MutantStack const &other): std::stack<T, Container>(other){
	*this = other;
}

template <class T, class Container>
MutantStack<T, Container>&	MutantStack<T, Container>::operator=(MutantStack const& other){
	*this = other;
	return (*this);
}

template <class T, class Container>
MutantStack<T, Container>::~MutantStack(){};

template <class T, class Container>
typename MutantStack<T, Container>::iterator
MutantStack<T, Container>::begin(){
	return (std::stack<T>::c.begin());
}

template <class T, class Container>
typename MutantStack<T, Container>::iterator
MutantStack<T, Container>::end(){
	return (std::stack<T>::c.end());
}