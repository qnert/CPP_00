/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:30:08 by skunert           #+#    #+#             */
/*   Updated: 2023/12/06 12:22:32 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void): _n(0), _curr_amount(0) {};

Span::Span(unsigned int n): _n(n), _curr_amount(0) {};

Span::Span(Span const& other){
	*this = other;
}

Span&	Span::operator=(Span const& other){
	if (this != &other){
		this->_n = other._n;
		this->_curr_amount = other._curr_amount;
		this->_vec = other._vec;
	}
	return (*this);
}

Span::~Span(void){};

//member functions

unsigned int	Span::size(void) const{
	return (this->_n);
}

unsigned int	Span::get_curr_amount(void) const{
	return (this->_curr_amount);
}

void	Span::printSpan(void){
	for (std::vector<int>::iterator i = this->_vec.begin(); i != this->_vec.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
}

void	Span::addNumber(int nb){
	if (this->_curr_amount < this->_n){
		this->_vec.push_back(nb);
		this->_curr_amount++;
	}
	else
		throw (std::logic_error("Already enough element inside the container.\n"));
}

void	Span::addRange(int nb, int amount){
	unsigned int	iter = this->_curr_amount + amount;
	for (unsigned int i = this->_curr_amount; i < iter; i++)
		this->addNumber(nb);
}

int	Span::shortestSpan(void){
	if (this->_curr_amount == 1 || this->_curr_amount == 0)
		throw (std::logic_error("Can't find shortest span because of length one or zero.\n"));
	std::vector<int> cpy = this->_vec;
	int	shortest = std::numeric_limits<int>::max();
	int	tmp;
	std::sort(cpy.begin(), cpy.end());
	for (std::vector<int>::iterator i = cpy.begin() + 1; i != cpy.end(); i++){
		tmp = *i - *(i - 1);
		if (tmp < shortest)
			shortest = tmp;
	}
	return (shortest);

}

int	Span::longestSpan(void){
	if (this->_curr_amount == 1 || this->_curr_amount == 0)
		throw (std::logic_error("Can't find longest span because of length one or zero.\n"));
	std::vector<int>::iterator	min = std::min_element(this->_vec.begin(), this->_vec.end());
	std::vector<int>::iterator	max = std::max_element(this->_vec.begin(), this->_vec.end());

	return (*max - *min);
}
