
extern char	***g_tempMatrix;
int g_rows;
int g_cols;
void ft_stradd(char *dest, const char *src);
void int_to_str(int num, char *str);

int     ft_add_number(int num, int row, int col, int **matrix)
{
    int     i;
    char    str[3];

    i = 0;
    matrix[row][col] = num;

    while (i < g_cols)
    {
        int_to_str(num, str);
        if (!matrix[i][col])
        {
            ft_stradd(g_tempMatrix[i][col], str);
        }
        i++;
    }
    i = 0;
    while (i < g_rows)
    {
        int_to_str(num, str);
        if (!matrix[row][i])
        {
            ft_stradd(g_tempMatrix[row][i], str);
        }
        i++;
    }
    return (0);
}