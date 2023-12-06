/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:25:01 by skunert           #+#    #+#             */
/*   Updated: 2023/12/06 12:21:59 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>

#define YELHB "\e[0;103m"
#define RESET "\e[0m"

class Span{
	private:
		unsigned int		_n;
		unsigned int		_curr_amount;
		std::vector<int>	_vec;

	public:
		unsigned int	size(void) const;
		unsigned int	get_curr_amount(void) const;
		void			printSpan(void);
		void			addNumber(int nb);
		void			addRange(int nb, int amount);
		int				shortestSpan(void);
		int				longestSpan(void);

	Span(void);
	Span(unsigned int n);
	Span(Span const& other);
	Span&	operator=(Span const& other);
	~Span(void);

};