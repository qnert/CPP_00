/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:59:16 by skunert           #+#    #+#             */
/*   Updated: 2023/12/11 14:04:28 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

class RPN{
	private:
		std::string		_input;
		std::stack<int>	_nbs;

	public:

	RPN(void);
	RPN(std::string input);
	RPN(RPN const& other);
	RPN&	operator=(RPN const& other);
	~RPN(void);
};
