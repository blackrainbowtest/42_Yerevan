
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	ch;

	ch = '0';
	while (ch <= '9')
	{
		write(1, &ch, 1);
		ch++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
