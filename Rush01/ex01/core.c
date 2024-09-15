// core.c ex01

#include <unistd.h>
#include <stdio.h>

extern int g_rows;

char    ***ft_create_char_matrix(void);
void    ft_free_char_matrix(char ***d, int row);
void    ft_display_matrix(int **matrix);
void    ft_display_char_matrix(char ***matrix);

void    ft_core(int **arr, int **matrix)
{
    char		***tempMatrix;

    tempMatrix = ft_create_char_matrix();

    tempMatrix[0][0] = "test";
    ft_display_matrix(arr);
    ft_display_char_matrix(tempMatrix);
    
    
    ft_free_char_matrix(tempMatrix, g_rows);
}