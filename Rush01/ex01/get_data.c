#include <stdlib.h>

int *ft_cell_boundaries(int **arr, int row, int col)
{
    int     *result;

    result = (int *)malloc(4 * sizeof(int));
    if (!result)
        return (NULL);
    result[0] = arr[0][col];     
    result[1] = arr[1][col];
    result[2] = arr[2][row];
    result[3] = arr[3][row];
    return (result);
}

int *ft_by_boundaries(int *boundaries, char ***temp, int row, int col)
{
    int     *result;
    int     i;
	int     highest;
	int     count;
    int     test;

    result = (int *)malloc(4 * sizeof(int));
    if (!result)
        return (0);
    
    return (result);
}