/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:53:25 by skunert           #+#    #+#             */
/*   Updated: 2023/11/28 12:49:49 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Data{
	private:
		const int			_bytes;
		const std::string	_type;

	public:
		int					getBytes(void) const;
		const std::string	getType(void) const;

	Data(void);
	Data(std::string type, int bytes);
	Data(Data const& other);
	Data&	operator=(Data const& other);
	~Data(void);
};

std::ostream&	operator<<(std::ostream& os, Data const& other);
