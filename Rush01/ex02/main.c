#include <stdlib.h>
#include <unistd.h>

int	**ft_create_matrix(int rows, int cols);
void	ft_free_matrix(int **matrix, int rows);
void	ft_fill_matrix(int **arr, char *str, int cols);
void	ft_display_matrix(int **arr, int rows, int cols);

int	ft_check_cell(int **matrix, int *pos, int **arr, int num)
{
	int		nb;
	
	nb = 0;
	while (nb < 4)
	{
		if (matrix[pos[0]][nb] == num || matrix[nb][pos[1]] == num)
			return (0);
		nb++;
	}
	return (1);
}

int	ft_run_loop(int **matrix, int **arr, int row, int col)
{
	int		nb;
	int		pos[2];

	nb = 1;
	if (row == 3 && col > 3)
	{
		return (1);
	}
	if (col == 4)
	{
		row++;
		col = 0;
	}
	while (nb <= 4)
	{
		pos[0] = row;
		pos[1] = col;
		if (ft_check_cell(matrix, pos, arr, nb))
		{
			matrix[row][col] = nb;
			if (ft_run_loop(matrix, arr, row, col + 1))
				return (1);
			matrix[row][col] = 0;
		}
		nb++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	**matrix;
	int	**arr;

	if (argc == 2)
	{
		matrix = ft_create_matrix(4, 4);
		arr = ft_create_matrix(4, 4);
		ft_fill_matrix(arr, argv[1], 4);
		if (ft_run_loop(matrix, arr, 0, 0))
			ft_display_matrix(matrix, 4, 4);
		else
			write(2, "Error", 5);
		ft_free_matrix(matrix, 4);
		ft_free_matrix(arr, 4);
	}
	else
		write(2, "Error", 5);
	write(1, "\n", 1);
	return (0);
}
