#include <iostream>

void	switch_to_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (std::islower(str[i]))
			str[i] = std::toupper(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 1 && argc != 2)
		return (-1);
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	if (argc == 2)
	{
		switch_to_uppercase(argv[1]);
		std::cout << argv[1] << std::endl;
	}
	return (0);
}