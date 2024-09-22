#include "lib.h"

int	main(int argc, char **argv)
{
	if (argc < 2 || argc > 3)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (argc == 2)
	{
		if (ft_core(argv[1], "numbers.dict"))
		{
			ft_putstr("Error\n");
			return (1);
		}
	}
	else if (argc == 3)
	{
		if (ft_core(argv[1], argv[2]))
		{
			ft_putstr("Error\n");
			return (1);
		}
	}
	return (0);
}
