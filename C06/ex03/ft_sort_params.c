#include <unistd.h>

void	ft_display(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		write(1, &str[i], 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;

	i = 1;
	ft_sort_param();
	while (i < argc)
		ft_display(argv[i++]);
	return (0);
}
