/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:25:01 by skunert           #+#    #+#             */
/*   Updated: 2023/12/06 11:41:43 by skunert          ###   ########.fr       */
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
		unsigned int		_curr_idx;
		std::vector<int>	_vec;

	public:
		unsigned int	size(void) const;
		void			printSpan(void);
		void			addNumber(int nb);
		int				shortestSpan(void);
		int				longestSpan(void);

	Span(void);
	Span(unsigned int n);
	Span(Span const& other);
	Span&	operator=(Span const& other);
	~Span(void);

};