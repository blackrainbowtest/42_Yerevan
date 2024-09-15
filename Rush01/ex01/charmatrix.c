#include <stdlib.h>
#include <unistd.h>

extern int rows;
extern int cols;
extern int ch_size;

char ***ft_create_char_matrix(void)
{
    char ***matrix;
    int i;
    int j;

    i = 0;
    matrix = (char ***)malloc(rows * sizeof(char **));
    if (!matrix)
        return (0);
    while (i < rows)
    {
        matrix[i] = (char **)malloc(cols * sizeof(char *));
        if (!matrix[i])
            return (0);
        j = 0;
        while (j < cols)
        {
            matrix[i][j] = (char *)malloc(ch_size * sizeof(char));
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
    while (i < rows)
    {
        j = 0;
        while (j < cols)
        {
            free(matrix[i][j]);
            j++;
        }
        free(matrix[i]);
        i++;
    }
    free(matrix);
}