/* ************************************************************************** */
/*	                                                                        */
/*	                                                    :::      ::::::::   */
/*   core.c	                                         :+:      :+:    :+:   */
/*	                                                +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>	                +#+  +:+       +#+        */
/*	                                            +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:58:46 by aramarak	      #+#    #+#             */
/*   Updated: 2024/09/15 20:49:16 by aramarak         ###   ########.fr       */
/*	                                                                        */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	***g_tempMatrix;

char	***ft_create_char_matrix(void);
void	ft_free_char_matrix(char ***d);
void	ft_display_matrix(int **matrix);
void	ft_display_char_matrix(char ***matrix);
void	ft_strcpy(char *dest, char *src);
int	 ft_loop_matrix(int **arr, int **matrix, char ***g_tempMatrix);
int	 *ft_cell_boundaries(int **arr, int row, int col);
int	 ft_valid_cons(int *boundaries, int row, int col, char ***g_tempMatrix);
int		ft_check_matrix_full(int rows, int cols, int **matrix);

int	ft_core(int **arr, int **matrix)
{
	g_tempMatrix = ft_create_char_matrix();
	if (!g_tempMatrix)
	    write(2, "Error", 5);
	if (ft_loop_matrix(arr, matrix, g_tempMatrix))
	{
	    ft_free_char_matrix(g_tempMatrix);
			return (1);
	}
	if (1)
	{
			write(1, "\nArr\n", 5);
			ft_display_matrix(arr);
			write(1, "\nChar Matric\n", 13);
			ft_display_matrix(matrix);
			write(1, "\nTemp Matric\n", 13);
			ft_display_char_matrix(g_tempMatrix);
	}
	ft_free_char_matrix(g_tempMatrix);
	return (0);
}
/*
* Loop out matrix
*/
int ft_loop_matrix(int **arr, int **matrix, char ***g_tempMatrix)
{
	int     row;
	int     col;
	int     *boundaries;
	int     is_changed;

	is_changed = 1;
	while (is_changed)
	{
	    is_changed = 0;
	    row = 0;
	    while (row < 4)
	    {
	        col = 0;
	        while (col < 4)
	        {
				boundaries = ft_cell_boundaries(arr, row, col);
				ft_valid_cons(boundaries, row, col, g_tempMatrix);
								
	            if (ft_check_matrix_full(4, 4, matrix))
	            	is_changed = 0;
	            free(boundaries);
	            col++;
	        }
	        row++;
	    }
	}
	return (0);
}
