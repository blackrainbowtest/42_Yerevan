#include <stdio.h>

int	ft_check_up_hor_vision(int **matrix, int index, int *limits)
{
	int		last_max;
	int		vision_count;
	int		nb;

	last_max = 0;
	vision_count = 0;
	nb = 0;
	while (nb <= 3)
	{
		if (matrix[nb][index] > last_max)
		{
			last_max = matrix[nb][index];
			vision_count++;
		}
		nb++;
	}
	return (vision_count <= limits[index]);
}

int	ft_check_dw_hor_vision(int **matrix, int index, int *limits)
{
	int		last_max;
	int		vision_count;
	int		nb;

	last_max = 0;
	vision_count = 0;
	nb = 3;
	while (nb >= 0)
	{
		if (matrix[nb][index] > last_max)
		{
			last_max = matrix[nb][index];
			vision_count++;
		}
		nb--;
	}
	return (vision_count <= limits[index]);
}

int	ft_check_l_ver_vision(int **matrix, int index, int *limits)
{
	int		last_max;
	int		vision_count;
	int		nb;

	last_max = 0;
	vision_count = 0;
	nb = 0;
	while (nb < 4)
	{
		if (matrix[nb][index] > last_max)
		{
			last_max = matrix[nb][index];
			vision_count++;
		}
		nb++;
	}
	return (vision_count <= limits[index]);
}

int	ft_check_r_ver_vision(int **matrix, int index, int *limits)
{
	int		last_max;
	int		vision_count;
	int		nb;

	last_max = 0;
	vision_count = 0;
	nb = 3;
	while (nb >= 0)
	{
		if (matrix[nb][index] > last_max)
		{
			last_max = matrix[nb][index];
			vision_count++;
		}
		nb--;
	}
	return (vision_count <= limits[index]);
}
