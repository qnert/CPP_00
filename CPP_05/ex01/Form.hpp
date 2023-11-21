/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:16:21 by skunert           #+#    #+#             */
/*   Updated: 2023/11/21 22:02:42 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		bool				_is_signed;
		int	const			_required_grade_sign;
		int	const			_required_grade_exec;

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

		std::string			getName(void) const;
		bool				getSignedstatus(void) const;
		int					getRequirementsign(void) const;
		int					getRequirementexec(void) const;
		void				beSigned(class Bureaucrat& other);

	Form(void);
	Form(std::string name, int req_sign, int req_exec);
	Form(Form const& other);
	Form&	operator=(Form const& other);
	~Form(void);
};

std::ostream&	operator<<(std::ostream &os, Form const& other);

#endif