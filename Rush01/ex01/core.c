// core.c ex01

#include <unistd.h>
#include <stdio.h>      // DELETEME
#include <stdlib.h>

extern int rows;
extern int cols;
extern int ch_size;
extern int debug;
char    ***tempMatrix;

char    ***ft_create_char_matrix(void);
void    ft_free_char_matrix(char ***d);
void    ft_display_matrix(int **matrix);
void    ft_display_char_matrix(char ***matrix);
void    ft_strcpy(char *dest, char *src);
int     ft_loop_matrix(int **arr, int **matrix, char ***tempMatrix);
int     *ft_cell_boundaries(int **arr, int row, int col);
int     ft_valid_cons(int *boundaries, int row, int col, char ***tempMatrix);

int    ft_core(int **arr, int **matrix)
{
    tempMatrix = ft_create_char_matrix();
    if (!tempMatrix)
        write(2, "Error", 5);
    if (ft_loop_matrix(arr, matrix, tempMatrix))
    {
        ft_free_char_matrix(tempMatrix);
        return (1);
    }
    if (debug)
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
/*
* Loop out matrix
*/
int ft_loop_matrix(int **arr, int **matrix, char ***tempMatrix)
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
        while (row < rows)
        {
            col = 0;
            while (col < cols)
            {
                boundaries = ft_cell_boundaries(arr, row, col);
                ft_valid_cons(boundaries, row, col, tempMatrix);
				

                // sprintf("%d\n", boundaries[0]);
                // if ( ||)
                // {
                //     is_changed = 1;
                // }
                free(boundaries);
                col++;
            }
            row++;
        }
    }
    return (0);
}

