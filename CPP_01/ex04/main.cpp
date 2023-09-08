/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:20:00 by skunert           #+#    #+#             */
/*   Updated: 2023/09/08 16:51:46 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>
#include <fstream>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

std::fstream	open_file(std::string str)
{
	std::fstream	fd;

	fd.open(str, std::ios::in);
	return (fd);
}

std::ofstream	create_file(std::string str)
{
	std::ofstream	fd;

	str.append(".replace");
	fd.open(str, std::ios::out);
	return (fd);
}

int	main(int argc, char *argv[])
{
	std::string	buff;
	std::fstream fd_old;
	std::ofstream fd_new;

	if (ft_strlen(argv[2]) == 0 || ft_strlen(argv[3]) == 0)
		return (std::cout << "One argument of argv is empty!\n", 0);
	if (argc == 4)
	{
		fd_old = open_file(argv[1]);
		fd_new = create_file(argv[1]);
		if (!fd_old)
			return (std::cout << "File couldn't be opened!\n", 0);
		while (getline(fd_old, buff, ' '))
		{
			if (!buff.compare(argv[2]))
				fd_new << argv[3];
			else
				fd_new << buff;
			if (argv[2][0] == 32)
				fd_new << argv[3];
			else
				fd_new << " ";

		}
		fd_old.close();
		fd_new.close();

	}
	return (0);
}