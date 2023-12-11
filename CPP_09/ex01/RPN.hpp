/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:59:16 by skunert           #+#    #+#             */
/*   Updated: 2023/12/11 16:19:16 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <stack>

class RPN{
	private:
		std::string		_input;

	public:
		void	calculate_RPN(void);

	RPN(void);
	RPN(std::string input);
	RPN(RPN const& other);
	RPN&	operator=(RPN const& other);
	~RPN(void);
};
