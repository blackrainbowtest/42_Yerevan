/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charmatrix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:58:14 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/15 19:58:25 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdlib.h>
#include <unistd.h>

extern int g_rows;
extern int g_cols;
extern int g_ch_size;

char ***ft_create_char_matrix(void)
{
    char ***matrix;
    int i;
    int j;

    i = 0;
    matrix = (char ***)malloc(g_rows * sizeof(char **));
    if (!matrix)
        return (0);
    while (i < g_rows)
    {
        matrix[i] = (char **)malloc(g_cols * sizeof(char *));
        if (!matrix[i])
            return (0);
        j = 0;
        while (j < g_cols)
        {
            matrix[i][j] = (char *)malloc(g_ch_size * sizeof(char));
            if (!matrix[i][j])
                return (0);
            matrix[i][j][0] = '\0';
            j++;
        }
        i++;
    }
    return matrix;
}

void ft_free_char_matrix(char ***matrix)
{
    int i;
    int j;

    i = 0;
    while (i < g_rows)
    {
        j = 0;
        while (j < g_cols)
        {
            free(matrix[i][j]);
            j++;
        }
        free(matrix[i]);
        i++;
    }
    free(matrix);
}
