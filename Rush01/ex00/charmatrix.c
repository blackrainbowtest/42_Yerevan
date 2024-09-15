#include <stdlib.h>
#include <unistd.h>

char ***ft_create_char_matrix(void)
{
	char ***matrix;
	int i;
	int j;

	i = 0;
	matrix = (char ***)malloc(4 * sizeof(char **));
	if (!matrix)
		return (0);
	while (i < 4)
	{
		matrix[i] = (char **)malloc(4 * sizeof(char *));
		if (!matrix[i])
			return (0);
		j = 0;
		while (j < 4)
		{
			matrix[i][j] = (char *)malloc(60 * sizeof(char));
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
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			free(matrix[i][j]);
			j++;
		}
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
