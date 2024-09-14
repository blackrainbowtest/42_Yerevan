/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:50:46 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/14 19:02:25 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		**ft_create_matrix(int rows, int cols);
void	ft_free_matrix(int **d, int rows);
void	ft_fill_matrix(int **arr, int rows, int cols, char *str);
void	ft_print_matrix(int **arr, int rows, int cols);

int	main(int argc, char **argv)
{
	int		**d;
	int		rows;
	int		cols;

	rows = 4;
	cols = 4;
	if (argc == 2)
	{
		d = ft_create_matrix(rows, cols);
		if (!d)
			return (0x1);
		ft_fill_matrix(d, rows, cols, argv[1]);
		ft_print_matrix(d, rows, cols);
		ft_free_matrix(d, rows);
	}
	write(1, "\n", 1);
	return (0x3);
}
