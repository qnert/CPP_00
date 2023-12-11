/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:59:31 by skunert           #+#    #+#             */
/*   Updated: 2023/12/11 16:19:00 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
//helper function
bool	is_arithmetic_symbol(char c){
	std::string	tmp("*/+-");

	if (tmp.find(c) != std::string::npos)
		return (true);
	else
		return (false);
}

bool	check_input(std::string& str){
	int	check = 0;
	for (unsigned int i = 0; i < str.size(); i++){
		if (check < 2 && !(str[i] >= '0' && str[i] <= '9'))
			return (false);
		else if ((str[i] >= '0' && str[i] <= '9') || is_arithmetic_symbol(str[i]) || str[i] == 32){
			check++;
			i++;
		}
		else{
			std::cout << str[i];
			return (false);
		}
	}
	return (true);
}

void	do_addition(std::stack<float>& stack){
	float	tmp;

	tmp = stack.top();
	stack.pop();
	tmp = stack.top() + tmp;
	stack.pop();
	stack.push(tmp);
}

void	do_substraction(std::stack<float>& stack){
	float	tmp;

	tmp = stack.top();
	stack.pop();
	tmp = stack.top() - tmp;
	stack.pop();
	stack.push(tmp);
}

void	do_multiplication(std::stack<float>& stack){
	float	tmp;

	tmp = stack.top();
	stack.pop();
	tmp = stack.top() * tmp;
	stack.pop();
	stack.push(tmp);
}

void	do_division(std::stack<float>& stack){
	float	tmp;

	tmp = stack.top();
	stack.pop();
	tmp = stack.top() / tmp;
	stack.pop();
	stack.push(tmp);
}

//Canonical Form
RPN::RPN(void): _input(){}

RPN::RPN(std::string input){
	if (check_input(input) == false)
		throw (std::logic_error("Error: Input string is invalid!\n"));
	else
		this->_input = input;

}

RPN::RPN(RPN const& other){
	*this = other;
}

RPN&	RPN::operator=(RPN const& other){
	if (this != &other){
		this->_input = other._input;
	}
	return (*this);
}

RPN::~RPN(void){}

//member function
void	RPN::calculate_RPN(void){
	char			tmp;
	std::stack<float>	calc;

	for (int i = 0; this->_input[i] != '\0'; i++){
		std::cout << this->_input[i] << std::endl;
		if (this->_input[i] >= '0' && this->_input[i] <= '9')
			calc.push(std::atof(&this->_input[i]));
		else if (is_arithmetic_symbol(this->_input[i])){
			tmp = this->_input[i];
			switch(tmp){
				case '+':
					do_addition(calc);
					break ;
				case '-':
					do_substraction(calc);
					break ;
				case '*':
					do_multiplication(calc);
					break ;
				case '/':
					do_division(calc);
					break ;
			}
		}
	}
	std::cout << "The result is: " << std::setprecision(2) << calc.top() << std::endl;
}
