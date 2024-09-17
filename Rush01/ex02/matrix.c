#include <stdlib.h>
#include <unistd.h>

int	**ft_create_matrix(int rows, int cols)
{

	int		**d;
	int		nb;

	nb = 0;
	d = (int **)malloc(rows * sizeof(int *));
	if (!d)
	{
		write(2, "Error", 5);
		return (0);
	}
	while (nb < rows)
	{
		d[nb] = (int *)malloc(cols * sizeof(int));
		if (!d[nb])
		{
			write(2, "Error", 5);
			while (nb-- > 0)
				free(d[nb]);
			free(d);
			return (0);
		}
		nb++;
	}
	return (d);
}

void	ft_free_matrix(int **arr, int rows)
{
	int		nb;

	nb = 0;
	while (nb < rows)
	{
		free(arr[nb]);
		nb++;
	}
	free(arr);
}

void	ft_fill_matrix(int **arr, char *str, int cols)
{
	int		row;
	int		col;

	row = 0;
	col = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			arr[row][col] = *str - '0';
			col++;
			if (col == cols)
			{
				col = 0;
				row++;
			}
		}
		str++;
	}
}

void	ft_display_matrix(int **matrix, int rows, int cols)
{
	int		row;
	int		col;
	char	ch;

	row = 0;
	while (row < rows)
	{
		col = 0;
		while (col < cols)
		{
			ch = matrix[row][col];
			ch += '0';
			write(1, &ch, 1);
			write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
