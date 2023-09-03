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
	int	i;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[++i] != NULL)
		{
			switch_to_uppercase(argv[i]);
			std::cout << argv[i];
			if (i < argc - 1)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
