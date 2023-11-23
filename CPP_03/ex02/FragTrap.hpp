/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:00:10 by skunert           #+#    #+#             */
/*   Updated: 2023/11/23 12:20:39 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		void	highFivesGuys(void);

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap& other);
	FragTrap&	operator=(const FragTrap& other);
	~FragTrap(void);
};

#endif
