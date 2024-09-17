<<<<<<< HEAD
#include <unistd.h>

int	row_leftright(int check, int *attr, int grid[4][4], int arr[4][4])
{
	int	i;
	int	highest;
	int	count;

	i = -1;
	highest = 0;
	count = 0;
	while (++i < 4)
	{
		if (attr[2] == grid[attr[0]][i] && i != attr[1])
			return (1);
		if (grid[attr[0]][i] > highest)
		{
			highest = grid[attr[0]][i];
			count++;
		}
		if (grid[attr[0]][i] == -1)
			check = 1;
	}
	if (count > arr[2][attr[0]] && check == 0)
		return (1);
	if (check == 0 && count != arr[2][attr[0]])
		return (1);
	return (0);
}

int	col_updown(int check, int *attr, int grid[4][4], int arr[4][4])
{
	int	i;
	int	highest;
	int	count;

	count = 0;
	i = -1;
	highest = 0;
	while (++i < 4)
	{
		if (attr[2] == grid[i][attr[1]] && i != attr[0])
			return (1);
		if (grid[i][attr[1]] > highest)
		{
			highest = grid[i][attr[1]];
			count++;
		}
		if (grid[i][attr[1]] == -1)
			check = 1;
	}
	if (count > arr[0][attr[1]] && check == 0)
		return (1);
	if (check == 0 && count != arr[0][attr[1]])
		return (1);
	return (0);
}

int	rightleft(int check, int *attr, int grid[4][4], int arr[4][4])
{
	int	count;
	int	highest;
	int	i;

	count = 0;
	highest = 0;
	i = 4;
	while (--i > -1)
	{
		if (grid[attr[0]][i] > highest)
		{
			highest = grid[attr[0]][i];
			count++;
		}
		if (grid[attr[0]][i] == -1)
			check = 1;
	}
	if (count > arr[3][attr[0]] && check == 0)
		return (1);
	if (check == 0 && count != arr[3][attr[0]])
		return (1);
	return (0);
}

int	downup(int check, int *attr, int grid[4][4], int arr[4][4])
{
	int	count;
	int	highest;
	int	i;

	count = 0;
	highest = 0;
	i = 4;
	while (--i > -1)
	{
		if (grid[i][attr[1]] > highest)
		{
			highest = grid[i][attr[1]];
			count++;
		}
		if (grid[i][attr[1]] == -1)
			check = 1;
	}
	if (count > arr[1][attr[1]] && check == 0)
		return (1);
	if (check == 0 && count != arr[1][attr[1]])
		return (1);
	return (0);
}
=======
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
		nb--;
	}
	if (!is_row_full)
		return (1);
	return (vision_count <= limits[row]);
}
>>>>>>> 689b1264d8096ca98b40c37bedf23dbf36583c72
