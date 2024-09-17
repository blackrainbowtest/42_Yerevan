#include <unistd.h>

void	ft_display_matrix(int **matrix)
{
	int		row;
	int		col;
	char	c;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			c = matrix[row][col] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

void ft_display_char_matrix(char ***matrix)
{
	int row;
	int col;
	int i;
	char *current_str;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			current_str = matrix[row][col];
			if (current_str != NULL)  // Проверяем, что указатель не NULL
			{
				i = 0;
				while (current_str[i] != '\0')
				{
					write(1, &current_str[i], 1);
					i++;
				}
			}
			if (col < 4 - 1)
				write(1, " | ", 3);

			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
