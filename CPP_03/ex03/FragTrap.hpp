/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:00:10 by skunert           #+#    #+#             */
/*   Updated: 2023/11/23 13:58:15 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	private:
		bool	is_guarding;

	public:
		void	highFivesGuys(void);
		int		getAttackDamage(void);

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap& other);
	FragTrap&	operator=(const FragTrap& other);
	~FragTrap(void);
};
