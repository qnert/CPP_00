/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:39:22 by skunert           #+#    #+#             */
/*   Updated: 2023/09/28 16:48:50 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public :
		void	complain(std::string level);

	Harl(void);
	~Harl(void);
};

#endif
