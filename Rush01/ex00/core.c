
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	***ft_create_char_matrix(void);
void	ft_free_char_matrix(char ***d);
void	ft_display_matrix(int **matrix);
void	ft_display_char_matrix(char ***matrix);
void	ft_strcpy(char *dest, char *src);
int		ft_loop_matrix(int **arr, int **matrix, char ***tempMatrix);
int		*ft_cell_boundaries(int **arr, int row, int col);
int		ft_valid_cons(struct s_data *data);
int		ft_check_matrix_full(int rows, int cols, int **matrix);

int	ft_core(struct s_data *data)
{
	char	***tempMatrix;
	tempMatrix = ft_create_char_matrix();
	if (!tempMatrix)
	{
		write(2, "Error", 5);
		return (1);
	}
	data->tempMatrix = tempMatrix;
	if (ft_loop_matrix(&data))
	{
		ft_free_char_matrix(data->tempMatrix);
			return (1);
	}
	if (1)
	{
			write(1, "\nArr\n", 5);
			ft_display_matrix(data->arr);
			write(1, "\nChar Matric\n", 13);
			ft_display_matrix(data->matrix);
			write(1, "\nTemp Matric\n", 13);
			ft_display_char_matrix(data->tempMatrix);
	}
	ft_free_char_matrix(data->tempMatrix);
	return (0);
}

int ft_loop_matrix(struct s_data *data)
{
	int	 	is_changed;

	is_changed = 1;
	while (is_changed)
	{
		is_changed = 0;
		data->coords[0] = 0;
		while (coords[0] < 4)
		{
			data->coords[1] = 0;
			while (data->coords[1] < 4)
			{
				data->boundaries = = ft_cell_boundaries(data->arr, data->coords[0], data->coords[1]);
				ft_valid_cons(struct s_data *data);
								
				if (ft_check_matrix_full(4, 4, data->matrix))
					is_changed = 0;
				free(data->boundaries);
				data->coords[1]++;
			}
			data->coords[0]++;
		}
	}
	return (0);
}
