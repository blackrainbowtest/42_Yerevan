/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:59:56 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/15 19:59:58 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// display.c ex01

#include <unistd.h>

extern int g_rows;
extern int g_cols;
extern int g_ch_size;

void    ft_display_matrix(int **matrix)
{
	int		row;
	int		col;
	char	c;

	row = 0;
	while (row < g_rows)
	{
	    col = 0;
        while (col < g_cols)
		{
			c = matrix[row][col] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

void ft_display_char_matrix(char ***matrix)
{
    int row;
    int col;
    int i;
    char *current_str;

    row = 0;
    while (row < g_rows)
    {
        col = 0;
        while (col < g_cols)
        {
            current_str = matrix[row][col];
            if (current_str != NULL)  // Проверяем, что указатель не NULL
            {
                i = 0;
                while (current_str[i] != '\0')
                {
                    write(1, &current_str[i], 1);
                    i++;
                }
            }
            if (col < g_cols - 1)
                write(1, " | ", 3);

            col++;
        }
        write(1, "\n", 1);
        row++;
    }
}
