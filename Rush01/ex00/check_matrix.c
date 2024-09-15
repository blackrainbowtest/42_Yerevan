/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 21:19:03 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/14 22:27:39 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_column_check(int **arr, int **matrix,int col);
int		ft_row_check(int **arr, int **matrix, int row);
int 	*ft_initialize_values(int *list, int start, int end);
int 	*ft_initialize_values2(int *list, int start, int end);
int		*ft_create_array(int cols);

int	ft_check_matrix(int **arr, int **matrix, int rows, int cols)
{
	int		curr_row;
	int		curr_col;


	curr_row = 0;
	curr_col = 0;
	while (curr_row < rows)
	{
		while (curr_col < cols)
		{
			ft_column_check(arr, matrix, curr_col);
			ft_row_check(arr, matrix, curr_row);
			curr_col++;
		}
		curr_row++;
	}
	return (0);
}

int	ft_column_check(int **arr, int **matrix, int col)
{
	int		col_up;
	int		col_down;
	int		*answer;
	int		*line;
	int 	i;

	i = 0;
	col_up = arr[0][col];
	col_down = arr[1][col];
	line = ft_create_array(4);
	answer = ft_initialize_values(line, col_up, col_down);
	while(i < 4)
	{
		if (answer[i])
			matrix[i][col] = answer[i];
		i++;
	}
	i = 0;
	answer = ft_initialize_values2(line, col_up, col_down);
	while(i < 4)
	{
		if (answer[i])
			matrix[i][col] = answer[i];
		i++;
	}
	free(line);
	return (0);
}

int	ft_row_check(int **arr, int **matrix, int row)
{
	int		row_left;
	int		row_right;
	int		*answer;
	int		*line;
	int 	i;

	i = 0;
	row_left = arr[2][row];
	row_right = arr[3][row];
	line = ft_create_array(4);
	answer = ft_initialize_values(line, row_left, row_right);
	while(i < 4)
	{
		if (answer[i])
			matrix[row][i] = answer[i];
		i++;
	}
	i = 0;
	answer = ft_initialize_values2(line, row_left, row_right);
	while(i < 4)
	{
		if (answer[i])
			matrix[row][i] = answer[i];
		i++;
	}
	free(line);
	return (0);
}

int *ft_initialize_values(int *line, int start, int end)
{
	int		i;

	i = 0;
	if (start == 1 && end == 4)
		while (i < 4)
		{
			line[i] = 1 + i;
			i++;
		}
	else if (start == 2 && end == 3)
		line[1] = 4;
	else if (start == 1 && end == 3)
	{
		line[1] = 3;
		line[3] = 4;
	}
	return (line);
}

int *ft_initialize_values2(int *line, int start, int end)
{
	int		i;

	i = 0;
	if (start == 4 && end == 1)
		while (i < 4)
		{
			line[i] = 4 - i;
			i++;
		}
	else if (start == 3 && end == 2)
		line[2] = 4;
	else if (start == 3 && end == 1)
	{
		line[0] = 4;
		line[2] = 3;
	}
	return (line);
}