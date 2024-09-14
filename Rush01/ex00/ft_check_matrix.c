# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_check_matrix                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aramarak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/14 21:35:55 by aramarak          #+#    #+#              #
/*   Updated: 2024/09/14 22:30:21 by aramarak         ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

int		ft_column_check(int **arr, int **matrix,int col);
int		ft_row_check(int **arr, int **matrix, int row);
int		ft_initialize_values(int **matrix, int start, int end, int nb);

int	ft_check_matrix(int **arr, int **matrix, int rows, int cols)
{
	int		curr_row;
	int		curr_col;

	curr_row = 0;
	curr_col = 0;
	while (curr_row < rows)
	{
		while (curr_col < cols)
		{
			if (!matrix[curr_row][curr_col])
			{
				ft_column_check(arr, matrix, curr_col);
				ft_row_check(arr, matrix, curr_row);
			}
			curr_column++;
		}
		curr_row++;
	}
	return (1);
}

int	ft_column_check(int **arr, int **matrix, int col)
{
	int		col_up;
	int		col_down;

	col_up = arr[0][col];
	col_down = arr[1][col];
	ft_initialize_values(matrix, col_up, col_down, 0);
}

int	ft_row_check(int **arr, int **matrix, int row)
{
	int		row_left;
	int		row_right;

	row_left = arr[2][row];
	row_right = arr[3][row];
	ft_initialize_values(matrix, row_left, row_right, 1);
}

int	*ft_initialize_values(int **matrix, int start, int end, int nb)
{
	if (nb)
	{

	}
	else
	{

	}
}
