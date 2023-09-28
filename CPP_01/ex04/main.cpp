/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:20:00 by skunert           #+#    #+#             */
/*   Updated: 2023/09/28 14:33:17 by skunert          ###   ########.fr       */
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

std::string	read_file(std::string str)
{
	std::string		buff;
	std::string		ret_str = "";
	std::fstream	fd;

	fd.open(str, std::ios::in);
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

int	replace_string(std::string filename, std::string file_content, char **argv)
{
	size_t	i;
	size_t	j;
	size_t	found;
	std::ofstream	fd_new;

	fd_new.open(filename.append(".replace"), std::ios::out);
	if (!fd_new)
		return (std::cout << "File can't be created!\n", 1);
	i = 0;
	found = file_content.find(argv[2]);
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
		while (argv[3][j])
		{
			fd_new << argv[3][j];
			i++;
			j++;
		}
		found = file_content.find(argv[2], found + 1);
	}
	while (file_content[i])
	{
		fd_new << file_content[i];
		i++;
	}
	fd_new.close();
	return (0);
}

int	main(int argc, char *argv[])
{
	std::string	file_content;
	std::ofstream fd_new;

	if (ft_strlen(argv[2]) == 0 || ft_strlen(argv[3]) == 0)
		return (std::cout << "One argument of argv is empty!\n", 1);
	if (argc == 4)
	{
		file_content = read_file(argv[1]);
		if (file_content.empty())
			return (std::cout << "File couldn't be opened!\n", 1);
		replace_string(argv[1], file_content, argv);
	}
	return (0);
}
