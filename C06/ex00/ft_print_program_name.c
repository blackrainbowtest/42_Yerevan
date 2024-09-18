#include <unistd.h>

int	main(int argc, char **argv)
{
	int		nb;

	nb = 0;
	while (argv[0][nb] != '\0' && argc)
	{
		write(1, &argv[0][nb], 1);
		nb++;
	}
	write(1, "\n", 1);
	return (0);
}