/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:39:41 by skunert           #+#    #+#             */
/*   Updated: 2023/11/24 15:15:49 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fstream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm: public AForm
{
	private:
		std::string	_target;

	public:
		void		execute(Bureaucrat const& executor);

	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const& other);
	ShrubberyCreationForm&	operator=(ShrubberyCreationForm const& other);
	~ShrubberyCreationForm(void);
};
