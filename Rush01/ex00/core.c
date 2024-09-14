/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 21:19:03 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/14 22:04:04 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		**ft_create_matrix(int rows, int cols, int row, int column);
void	ft_print_matrix(int *arr, int rows, int cols);

int	ft_syntax(int **arr, int rows, int cols)
{
	int		**matrix;
	int		status;

	status = 0;
	matrix = ft_create_matrix(rows, cols);
	if (!matrix)
		return (0x4);
	while(status)
		status = ft_check_matrix(arr, matrix, row, cols);
	/*
	 *
	 */
	ft_free_matrix(matrix, rows);
}

