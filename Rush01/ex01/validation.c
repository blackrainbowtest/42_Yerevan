/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:50:46 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/14 22:26:31 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

extern int rows;
extern int cols;
extern char	***tempMatrix;
extern int **matrix;

void	ft_check_current(int up_down, int row, int left_right, int col);
void	ft_strcpy(char *dest, char *src);
int		ft_add_exception(int exc_min, int row, int col);
int		ft_vertical_pairs(int up, int down, int row, int col);
int		ft_horizonal_pairs(int left, int right, int row, int col);
void	ft_stradd(char *dest, const char *src);
int     ft_add_number(int num, int row, int col, int **matrix);

int ft_valid_cons(int *boundaries, int row, int col)
{
    if (row < (rows / 2) && col < (cols / 2))
        ft_check_current(boundaries[0], row, boundaries[2], col);
    else if (row < (rows / 2) && col >= (cols / 2))
        ft_check_current(boundaries[0], row, boundaries[3], ((cols - 1) - col));
    else if (row >= (rows / 2) && col < (cols / 2))
        ft_check_current(boundaries[1], ((rows - 1) - row), boundaries[2], col);
    else if (row >= (rows / 2) && col >= (cols / 2))
        ft_check_current(boundaries[1], ((rows - 1) - row), boundaries[2], ((cols - 1) - col));
	ft_vertical_pairs(boundaries[0], boundaries[1], row, col);
	ft_horizonal_pairs(boundaries[2], boundaries[3], row, col);

	return (0);
}

void	ft_check_current(int up_down, int row, int left_right, int col)
{
	int		min_val;
	int		temp;

	min_val = cols - (up_down - (row + 1));
	temp = rows - (left_right - (col + 1));
	if (min_val < temp)
	{
		ft_add_exception(min_val, row, col);
	}
	else
	{
		ft_add_exception(temp, row, col);
	}
}

int		ft_add_exception(int exc_min, int row, int col)
{
	printf("%d\n", exc_min);
	if (exc_min == 1)
	{
		ft_strcpy(tempMatrix[row][col], "-2-3-4");
	}
	else if (exc_min == 2)
	{
		ft_strcpy(tempMatrix[row][col], "-3-4");
	}
	else if (exc_min == 3)
	{
		ft_strcpy(tempMatrix[row][col], "-4");
	}
	return (0);
}

int		ft_horizonal_pairs(int left, int right, int row, int col)
{
	return (0);
}

int		ft_vertical_pairs(int up, int down, int row, int col)
{
	int		nb;

	nb = 0;
	while (nb < rows)
	{
		if (up == 4 && down == 1)
			ft_add_number(nb + 1, nb, col, matrix);
		else if (up == 1 && down == 4)
			ft_add_number(rows - nb, nb, col, matrix);
		else if (up == 1 && row == 0)
			ft_add_number(rows, 0, col, matrix);
		else if (down == 1 && row == 3)
			ft_add_number(rows, 3, col, matrix);
		nb++;
	}
	return (0);
}