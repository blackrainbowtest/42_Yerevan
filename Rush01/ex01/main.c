// main.c ex01

#include <unistd.h>

int g_rows;
int g_cols;
int g_ch_size;
int g_debug;
int		**arr;
int     **matrix;

int	    **ft_create_matrix(void);
void	ft_fill_matrix(int **arr, char *str);
void	ft_free_matrix(int **arr);
int     ft_core(int **arr, int **matrix);

int	main(int argc, char **argv)
{
    g_rows = 4;
    g_cols = 4;
    g_ch_size = 21;
    g_debug = 1;
    if (argc == 2)
	{
		arr = ft_create_matrix();
        matrix = ft_create_matrix();
		ft_fill_matrix(arr, argv[1]);
		if (ft_core(arr, matrix))
            write(2, "Error", 5);
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