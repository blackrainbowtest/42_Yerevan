#include <stdio.h>

/*
if not 0 we check row else col/up dows/
*/
int	ft_is_full(int pos1, int type, int **matrix)
{
	int		nb;

	nb = 0;
	while (nb < 4)
	{
		if (type)
			if (matrix[pos1][nb] == 0)
				return (0);
		else
			if (matrix[nb][pos1] == 0)
				return (0);
		nb++;
	}
	return (1);
}

int	ft_check_u_ver_vision(int **matrix, int column, int *limits)
{
	int		last_max;
	int		vision_count;
	int		nb;

	last_max = 0;
	vision_count = 0;
	nb = 0;
	while (nb <= 3)
	{
		if (matrix[nb][column] > last_max)
		{
			last_max = matrix[nb][column];
			vision_count++;
		}
		nb++;
	}
	if (!ft_is_full(column, 0, matrix));
		return (1);
	return (vision_count <= limits[column]);
}

int	ft_check_d_ver_vision(int **matrix, int column, int *limits)
{
	int		last_max;
	int		vision_count;
	int		nb;
	int		is_row_full;

	last_max = 0;
	vision_count = 0;
	nb = 3;
	is_row_full = ft_is_full(column, 0, matrix);
	while (nb >= 0)
	{
		if (matrix[nb][column] > last_max)
		{
			last_max = matrix[nb][column];
			vision_count++;
		}
		if (matrix[3][0] == 3 && matrix[0][0] == 2 && matrix[1][0] == 4)
		{
			printf("is_row_full - %d\n", is_row_full);
		}
		nb--;
	}
	if (!is_row_full)
		return (1);
	return (vision_count <= limits[column]);
}

int	ft_check_l_hor_vision(int **matrix, int row, int *limits)
{
	int		last_max;
	int		vision_count;
	int		nb;
	int		is_row_full;

	last_max = 0;
	vision_count = 0;
	nb = 0;
	is_row_full = ft_is_full(row, 1, matrix);
	while (nb < 4)
	{
		if (matrix[row][nb] > last_max)
		{
			vision_count++;
			last_max = matrix[row][nb];
		}
		if (matrix[3][0] == 3 && matrix[0][0] == 2 && matrix[1][0] == 4)
		{
			printf("is_row_full - %d\n", is_row_full);
		}
		nb++;
	}
	if (!is_row_full)
		return (1);
	return (vision_count <= limits[row]);
}

int	ft_check_r_hor_vision(int **matrix, int row, int *limits)
{
	int		last_max;
	int		vision_count;
	int		nb;
	int		is_row_full;

	last_max = 0;
	vision_count = 0;
	nb = 3;
	is_row_full = ft_is_full(row, 1, matrix);
	while (nb >= 0)
	{
		if (matrix[row][nb] > last_max)
		{
			last_max = matrix[row][nb];
			vision_count++;
		}
		if (matrix[3][0] == 3 && matrix[0][0] == 2 && matrix[1][0] == 4)
		{
			printf("is_row_full - %d - %d\n", is_row_full, last_max);
		}
		nb--;
	}
	if (!is_row_full)
		return (1);
	return (vision_count <= limits[row]);
}
