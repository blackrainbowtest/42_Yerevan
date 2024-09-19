#include <unistd.h>

void	ft_display(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

void	ft_swap_char_ptr(char **pc1, char **pc2)
{
	char	*tmp;

	tmp = *pc1;
	*pc1 = *pc2;
	*pc2 = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] != s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_args(int size, char **arr)
{
	int		i;
	int		j;

	i = 0;
	while (i < size -1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (ft_strcmp(arr[j], arr[j + 1]) > 0)
					ft_swap_char_ptr(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc > 1)
	{
		ft_sort_args((argc - 1), argv + 1);
		i = 0;
		while (i < argc - 1)
			ft_display(arr[i++]);
	}
	return (0);
}
