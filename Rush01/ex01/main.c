// main.c ex01

#include <unistd.h>

int g_rows;
int g_cols;
int g_ch_size;

int	    **ft_create_matrix(void);
void	ft_fill_matrix(int **arr, char *str);
void	ft_free_matrix(int **arr);
void    ft_display_matrix(int **matrix);
void    ft_core(int **arr, int **matrix);

int	main(int argc, char **argv)
{
    int		**arr;
    int     **matrix;

    g_rows = 4;
    g_cols = 4;
    g_ch_size = 256;

    if (argc == 2)
	{
		arr = ft_create_matrix();
        matrix = ft_create_matrix();
		ft_fill_matrix(arr, argv[1]);
        ft_display_matrix(matrix);
        write(1, "\n", 1);
		ft_core(arr, matrix);
		ft_free_matrix(arr);
        ft_free_matrix(matrix);
	}
	else
	{
		write(2, "Error", 5);
	}
    write(1, "\n", 1);
	return (0);
}