/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:49:59 by skunert           #+#    #+#             */
/*   Updated: 2023/12/05 13:10:43 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array(void){
	this->_arr = nullptr;
	this->_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n){
	this->_arr = new T[n];
	this->_size = n;
}

template <typename T>
Array<T>::Array(Array const& other){
	this->_size = other._size;
	this->_arr = new T[other._size];
	for (size_t i = 0; i < other._size; i++)
		this->_arr[i] = other._arr[i];
}

template <typename T>
Array<T>&	Array<T>::operator=(Array const& other){
	if (this != &other){
		delete[] this->_arr;
		this->_size = other._size;
		this->_arr = new T[other._size];
		for (size_t i = 0; i < other._size; i++)
			this->_arr[i] = other._arr[i];
	}
	return (*this);
}

template <typename T>
T&		Array<T>::operator[](size_t index) const{
	if (index >= this->_size){
		throw (IndexOutOfRange());
	}
	return (this->_arr[index]);
}

template <typename T>
Array<T>::~Array(void){
	if (this->_size > 0)
		delete[] this->_arr;
}

template <typename T>
size_t	Array<T>::size(void) const{
	return (this->_size);
}

template <typename T>
const char*	Array<T>::IndexOutOfRange::what() const throw(){
	return ("Index is out of range!\n");
}
