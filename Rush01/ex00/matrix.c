/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:30:56 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/14 21:38:09 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
		return (NULL);
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
			return (NULL);
		}
		nb++;
	}
	return (d);
}

void	ft_free_matrix(int **d, int rows)
{
	int		i;

	i = 0;
	while (i < rows)
	{
		free(d[i]);
		i++;
	}
	free(d);
}

void	ft_fill_matrix(int **arr, int rows, int cols, char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (*str)
	{
		while (*str == ' ')
			str++;
		if (*str >= '0' && *str <= '4')
		{
			arr[i][j] = *str;
			j++;
			if (j == cols)
			{
				j = 0;
				i++;
			}
		}
		str++;
	}
}

/*
 * Debug print
 * 
 */
void	ft_print_matrix(int **arr, int rows, int cols)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < rows)
	{
		while (j < cols)
		{
			write(1, &arr[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		j = 0;
		write(1, "\n", 1);
		i++;
	}
}
