/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:24:22 by skunert           #+#    #+#             */
/*   Updated: 2023/11/21 15:00:21 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat
{
	private:
		std::string			_name;
		int					_grade;

	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		std::string const	getName(void) const;
		int					getGrade(void) const;
		void				increaseGrade(void);
		void				decreaseGrade(void);

	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const& other);
	Bureaucrat&	operator=(Bureaucrat const& other);
	~Bureaucrat(void);
};

std::ostream&	operator<<(std::ostream& os, Bureaucrat& other);