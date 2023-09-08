/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:20:00 by skunert           #+#    #+#             */
/*   Updated: 2023/09/08 18:10:11 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
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
std::string	read_file(std::fstream fd)
{
	std::string	buff;
	std::string ret_str = "";

	if (!fd)
		return ("");
	while (std::getline(fd, buff))
	{
		ret_str.append(buff);
		ret_str.append("\n");
	}
	fd.close();
	return (ret_str);
}

int	main(int argc, char *argv[])
{
	size_t		i;
	size_t		j;
	size_t		found;
	std::string	file_content;
	std::ofstream fd_new;

	i = 0;
	if (ft_strlen(argv[2]) == 0 || ft_strlen(argv[3]) == 0)
		return (std::cout << "One argument of argv is empty!\n", 0);
	if (argc == 4)
	{
		file_content = read_file(open_file(argv[1]));
		if (file_content.empty())
			return (std::cout << "File couldn't be opened!\n", 0);
		fd_new = create_file(argv[1]);
		found = file_content.find(argv[2]);
		if (found == file_content.npos)
			fd_new << file_content;
		else
		{
			while (found != file_content.npos)
			{
				while (file_content[i] && i < found)
				{
					fd_new << file_content[i];
					i++;
				}
				j = 0;
				if (file_content[i + 1] == '\0')
					break ;
				while (argv[3][j] && i < (ft_strlen(argv[3]) + i))
				{
					fd_new << argv[3][j];
					i++;
					j++;
				}
				found = file_content.find(argv[2], found + 1);
			}
		}
		fd_new.close();
	}
	return (0);
}