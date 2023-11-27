/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 18:53:25 by skunert           #+#    #+#             */
/*   Updated: 2023/11/27 19:21:39 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Data{
	private:
		const int			_bytes;
		const std::string	_type;

	public:
		const int			getBytes(void) const;
		const std::string	getType(void) const;

	Data(void);
	Data(Data const& other);
	Data&	operator=(Data const& other);
	~Data(void);
};
