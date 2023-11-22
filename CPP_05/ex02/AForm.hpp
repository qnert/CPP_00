/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:16:21 by skunert           #+#    #+#             */
/*   Updated: 2023/11/22 16:35:29 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm
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
		virtual	void		execute(Bureaucrat const& executor);

	AForm(void);
	AForm(std::string name, int req_sign, int req_exec);
	AForm(AForm const& other);
	AForm&	operator=(AForm const& other);
	virtual	~AForm(void);
};

std::ostream&	operator<<(std::ostream &os, AForm const& other);

#endif