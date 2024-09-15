#include <stdlib.h>
#include <unistd.h>

extern int g_rows;
extern int g_cols;
extern int g_ch_size;

char ***ft_create_char_matrix(void);
void ft_free_char_matrix(char ***d, int row);
int ft_allocate_rows(char ***d);
int ft_allocate_columns(char **row, int cols);
void ft_free_row(char **row, int j);


char ***ft_create_char_matrix(void)
{
    char ***d;

    d = (char ***)malloc(g_rows * sizeof(char **));
    if (!d)
    {
        write(2, "Error", 5);
        return (0);
    }

    if (!ft_allocate_rows(d))
    {
        return (0);
    }
    return (d);
}

int ft_allocate_rows(char ***d)
{
    int i;

    i = 0;
    while (i < g_rows)
    {
        d[i] = (char **)malloc(g_cols * sizeof(char *));
        if (!d[i])
        {
            write(2, "Error", 5);
            ft_free_char_matrix(d, i);
            return (0);
        }
        if (!ft_allocate_columns(d[i], g_cols))
        {
            ft_free_char_matrix(d, i);
            return (0);
        }
        i++;
    }
    return (1);
}

int ft_allocate_columns(char **row, int cols)
{
    int j;

    j = 0;
    while (j < cols)
    {
        row[j] = (char *)malloc(g_ch_size * sizeof(char));
        if (!row[j])
        {
            write(2, "Error", 5);
            ft_free_row(row, j);
            return (0);
        }
        j++;
    }
    return (1);
}

void ft_free_row(char **row, int j)
{
    while (j-- > 0)
    {
        free(row[j]);
    }
    free(row);
}

void ft_free_char_matrix(char ***d, int row)
{
    while (row-- > 0)
    {
        ft_free_row(d[row], g_cols);
    }
    free(d);
}