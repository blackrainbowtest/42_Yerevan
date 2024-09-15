// core.c ex01

#include <unistd.h>
#include <stdio.h>      // DELETEME
#include <stdlib.h>

extern int g_rows;
extern int g_cols;
extern int g_ch_size;
extern int g_debug;

char    ***ft_create_char_matrix(void);
void    ft_free_char_matrix(char ***d);
void    ft_display_matrix(int **matrix);
void    ft_display_char_matrix(char ***matrix);
void    ft_strcpy(char *dest, char *src);
int     ft_loop_matrix(int **arr, int **matrix, char ***temp);
int     *ft_cell_boundaries(int **arr, int row, int col);

int    ft_core(int **arr, int **matrix)
{
    char		***tempMatrix;

    tempMatrix = ft_create_char_matrix();
    if (!tempMatrix)
        write(2, "Error", 5);
    if (ft_loop_matrix(arr, matrix, tempMatrix))
        return (1);
    if (g_debug)
    {
        write(1, "\nArr\n", 5);
        ft_display_matrix(arr);
        write(1, "\nChar Matric\n", 13);
        ft_display_matrix(matrix);
        write(1, "\nTemp Matric\n", 13);
        ft_display_char_matrix(tempMatrix);
    }
    ft_free_char_matrix(tempMatrix);
    return (0);
}

int ft_loop_matrix(int **arr, int **matrix, char ***temp)
{
    int     row;
    int     col;
    int     *boundaries;
    int     is_changed;

    row = 0;
    is_changed = 0;
    while (row < g_rows)
    {
        col = 0;
        while (col < g_cols)
        {
            boundaries = ft_cell_boundaries(arr, row, col);
            printf("%d\n", boundaries[0]);
            // if ()
            // {
            //     is_changed = 1;
            // }
            free(boundaries);
            col++;
        }
        row++;
    }
    return (0);
}

