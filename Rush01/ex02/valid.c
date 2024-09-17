#include <stdio.h>

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
	return (vision_count <= limits[column]);
}

int	ft_check_d_ver_vision(int **matrix, int column, int *limits)
{
	int		last_max;
	int		vision_count;
	int		nb;

	last_max = 0;
	vision_count = 0;
	nb = 3;
	while (nb >= 0)
	{
		if (matrix[nb][column] > last_max)
		{
			last_max = matrix[nb][column];
			vision_count++;
		}
		nb--;
	}
	return (vision_count <= limits[column]);
}

int	ft_check_l_hor_vision(int **matrix, int row, int *limits)
{
	int		last_max;
	int		vision_count;
	int		nb;

	last_max = 0;
	vision_count = 0;
	nb = 0;
	while (nb < 4)
	{
		if (matrix[row][nb] > last_max)
		{
			vision_count++;
			last_max = matrix[row][nb];
		}
		if (matrix[3][0] == 3 && matrix[0][0] == 2 && matrix[1][0] == 4)
		{
			printf("FROM LEFT - %d\n", matrix[row][nb]);
			printf("vision_count - %d, limits - %d \n", vision_count, limits[row]);
			// printf("");
		}
		nb++;
	}
	return (vision_count <= limits[row]);
}

int	ft_check_r_hor_vision(int **matrix, int row, int *limits)
{
	int		last_max;
	int		vision_count;
	int		nb;

	last_max = 0;
	vision_count = 0;
	nb = 3;
	while (nb >= 0)
	{
		if (matrix[row][nb] > last_max)
		{
			last_max = matrix[row][nb];
			vision_count++;
		}
		if (matrix[3][0] == 3 && matrix[0][0] == 2 && matrix[1][0] == 4)
		{
			printf("FROM LEFT - %d\n", matrix[row][nb]);
			printf("vision_count - %d, limits - %d \n", vision_count, limits[row]);
			// printf("");
		}
		nb--;
	}
	return (vision_count <= limits[row]);
}
