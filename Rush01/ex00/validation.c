#include <stdlib.h>
#include <stdio.h>

void	ft_check_current(int up_down, int *coords, int left_right, char ***tempMatrix);
void	ft_strcpy(char *dest, char *src);
int		ft_add_exception(int exc_min, int *coords, char ***tempMatrix);
int		ft_vertical_pairs(int up, int down, int *coords, char ***tempMatrix);
int		ft_horizonal_pairs(int left, int right, int *coords, char ***tempMatrix);
void	ft_stradd(char *dest, const char *src);
int		ft_add_number(int num, int *coord, int **matrix, char ***tempMatrix);

int ft_valid_cons(int *boundaries, int *coords, char ***tempMatrix)
{
	int		temp[2];

	temp[0] = coords[0];
	temp[1] = coords[1];
	if (coords[0] < (4 / 2) && coords[1] < (4 / 2))
		ft_check_current(boundaries[0], temp, boundaries[2], tempMatrix);
	temp[1] = ((4 - 1) - coords[1]);
	if (coords[0] < (4 / 2) && coords[1] >= (4 / 2))
		ft_check_current(boundaries[0], temp, boundaries[3], tempMatrix);
	temp[0] = ((4 - 1) - coords[0]);
	temp[1] = coords[1];
	if (coords[0] >= (4 / 2) && coords[1] < (4 / 2))
		ft_check_current(boundaries[1], temp, boundaries[2], tempMatrix);
	temp[1] = ((4 - 1) - coords[1]);
	if (coords[0] >= (4 / 2) && coords[1] >= (4 / 2))
		ft_check_current(boundaries[1], temp, boundaries[2], tempMatrix);
	ft_vertical_pairs(boundaries[0], boundaries[1], coords, tempMatrix);
	ft_horizonal_pairs(boundaries[2], boundaries[3], coords, tempMatrix);
	return (0);
}

void	ft_check_current(int up_down, int *coords, int left_right, char ***tempMatrix)
{
	int		min_val;
	int		temp;

	min_val = 4 - (up_down - (coords[0] + 1));
	temp = 4 - (left_right - (coords[1] + 1));
	if (min_val < temp)
		ft_add_exception(min_val, coords, tempMatrix);
	else
		ft_add_exception(temp, coords, tempMatrix);
}

int		ft_add_exception(int exc_min, int *coords, char ***tempMatrix)
{
	if (exc_min == 1)
		ft_stradd(tempMatrix[coords[0]][coords[1]], "-2-3-4");
	else if (exc_min == 2)
		ft_stradd(tempMatrix[coords[0]][coords[1]], "-3-4");
	else if (exc_min == 3)
		ft_stradd(tempMatrix[coords[0]][coords[1]], "-4");
	return (0);
}

int		ft_horizonal_pairs(int left, int right, int *coords, char ***tempMatrix)
{
	int		nb;

	nb = 0;
	while (nb < 4)
	{
		if (left == 4 && right == 1)
			ft_add_number(nb + 1, coords, nb, tempMatrix);
		else if (left == 1 && right == 4)
			ft_add_number(4 - nb, coords, nb, tempMatrix);
		else if (left == 1 && coords[1] == 0)
			ft_add_number(4, coords, 0, tempMatrix);
		else if (right == 1 && coords[1] == 3)
			ft_add_number(4, coords, 3, tempMatrix);
		else if (right == 1 && left == 2)
			ft_add_number(3, coords, 3, tempMatrix);
		else if (right == 2 && left == 1)
			ft_add_number(3, coords, 0, tempMatrix);
		nb++;
	}
	return (0);
}

int		ft_vertical_pairs(int *vertical, int *coords, int **matrix, char ***tempMatrix)
{
	int		nb;
	int		temp[2];

	nb = 0;
	while (nb < 4)
	{
		if (vertical[0] == 4 && vertical[1] == 1)
			ft_add_number(nb + 1, nb, coords[1], matrix, tempMatrix);
		if (vertical[0] == 1 && vertical[1] == 4)
			ft_add_number(4 - nb, nb, coords[1], matrix, tempMatrix);
		if (vertical[0] == 1 && coords[0] == 0)
			ft_add_number(4, 0, coords[1], matrix, tempMatrix);
		if (vertical[1] == 1 && coords[0] == 3)
			ft_add_number(4, 3, coords[1], matrix, tempMatrix);
		if (vertical[0] == 1 && vertical[1] == 2)
			ft_add_number(3, 3, coords[1], matrix, tempMatrix);
		if (vertical[0] == 2 && vertical[1] == 1)
			ft_add_number(3, coords, matrix, tempMatrix);
			int *coord,
		nb++;
	}
	return (0);
}
