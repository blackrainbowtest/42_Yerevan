#include <unistd.h>

void	ft_display_pos(int *arr)
{
	int		i;
	char	ch;

	i = 0;
	while (i < 10)
	{
		ch = arr[i++] + '0';
		write(1, &ch, 1);
	}
	write(1, "\n", 1);
}

int	ft_can_put(int *arr, int row, int col)
{
	int		i;

	i = 0;
	while (i < row)
	{
		if (arr[i] == col || arr[i] - i == col - row
			|| arr[i] + i == col + row)
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_set_queen(int *arr, int row)
{
	static int	display_solution;
	int			col;

	if (row == 10)
	{
		display_solution++;
		ft_display_pos(arr);
	}
	else
	{
		col = 0;
		while (col < 10)
		{
			if (ft_can_put(arr, row, col))
			{
				arr[row] = col;
				ft_set_queen(arr, row + 1);
			}
			col++;
		}
	}
	return (display_solution);
}

int	ft_eight_queens_puzzle(void)
{
	int		arr[10];
	int		row;

	row = 0;
	while (row < 10)
	{
		arr[row] = -1;
		row++;
	}
	return (ft_set_queen(arr, 0));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_eight_queens_puzzle());
	return (0);
}*/
