/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:00:24 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/15 20:00:26 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// matrix.c ex01

#include <stdlib.h>
#include <unistd.h>

extern int g_rows;
extern int g_cols;

int	**ft_create_matrix(void)
{
	int		**d;
	int		nb;

	nb = 0;
	d = (int **)malloc(g_rows * sizeof(int *));
	if (!d)
	{
		write(2, "Error", 5);
		return (0);
	}
	while (nb < g_rows)
	{
		d[nb] = (int *)malloc(g_cols * sizeof(int));
		if (!d[nb])
		{
			write(2, "Error", 5);
			while (nb-- > 0)
				free(d[nb]);
			free(d);
			return (0);
		}
		nb++;
	}
	return (d);
}

void	ft_free_matrix(int **arr)
{
	int		i;

	i = 0;
	while (i < g_rows)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	ft_fill_matrix(int **arr, char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			arr[i][j] = *str - '0';
			j++;
			if (j == g_cols)
			{
				j = 0;
				i++;
			}
		}
		str++;
	}
}
