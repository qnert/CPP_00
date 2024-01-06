/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:49:19 by skunert           #+#    #+#             */
/*   Updated: 2024/01/06 19:47:15 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = "default";
	std::cout << "ShrubberyCreationForm default constructor called.\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
	std::cout << "ShrubberyCreationForm param constructor called.\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& other): AForm(other)
{
	*this = other;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& other)
{
	if (this != &other)
	{
		this->_target = other._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called.\n";
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor)
{
	if (executor.getGrade() > this->getRequirementexec())
		throw GradeTooLowException();
	else
	{
		std::ofstream	outfile((this->_target + "_shrubbery").c_str(), std::ios::out);
		if (outfile.is_open() == false){
			std::cout << "File could not be created nor opened.\n";
			std::cout << executor.getName() << " executed by " << this->getName() << " without success.\n";
			return ;
		}
		outfile << "        ?X:.          \n?X=   ???X=:           \n??X=   |??X::          \n??X=   ???X=:          \n ?XX=  |??X=:          \n ??X== ???X=:    ===   \n  ??XX=!??X=:    ====  \n   ???XX??X=   :====   \n    ??????X=: .:====   \n      ????XX=======    \n       ???XXX===:      \n       |X?XX=:=:       \n       ????X=:         \n       |??XX:          \n-------????X:---=      \n       |X?XX:          \n";
		outfile.close();
		std::cout << executor.getName() << " successfully executed " << this->getName() << " with target " << this->_target << ".\n";
	}
}

