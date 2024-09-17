
#include <unistd.h>

struct s_data {
    int		**arr;
    int		**matrix;
	char	***tempMatrix;
	int		coords[2];
	int		*boundaries;
};

int		**ft_create_matrix(void);
int		ft_core(struct s_data *data);
void	ft_fill_matrix(int **arr, char *str);
void	ft_free_matrix(int **arr);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		struct s_data s_d;
		s_d.arr = ft_create_matrix();
		s_d.matrix = ft_create_matrix();
		ft_fill_matrix(s_d.arr, argv[1]);
		if (ft_core(&s_d))
			write(2, "Error", 5);
		ft_free_matrix(s_d.arr);
		ft_free_matrix(s_d.matrix);
	}
	else
	{
		write(2, "Error", 5);
	}
	write(1, "\n", 1);
	return (0);
}
