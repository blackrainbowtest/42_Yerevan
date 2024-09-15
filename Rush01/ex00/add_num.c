
void	ft_stradd(char *dest, const char *src);
void	int_to_str(int num, char *str);
void	ft_set_matric_data(int *coord, char *str, char ***tempMatrix);

int	ft_add_number(int num, int *coord, int **matrix, char ***tempMatrix)
{
	int		i;
	char	str[3];
	int		row;
	int		col;

	i = 0;
	row = coord[0];
	col = coord[1];
	matrix[row][col] = num;
	while (i < 4)
	{
		int_to_str(num, str);
		if (!matrix[i][col])
		{
			ft_stradd(tempMatrix[i][col], str);
		}
			ft_set_matric_data(coord, str, tempMatrix);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		int_to_str(num, str);
		if (!matrix[row][i])
		{
			ft_stradd(tempMatrix[row][i], str);
		}
			ft_set_matric_data(coord, str, tempMatrix);
		i++;
	}
	return (0);
}

void	ft_set_matric_data(int *coord, char *str, char ***tempMatrix)
{
	int		nb;
	int		row;
	int		col;

	nb = 0;
	row = coord[0];
	col = coord[1];
	while (nb < 4)
	{
		if (nb != row)
			ft_stradd(tempMatrix[nb][col], str);
		if (nb != col)
			ft_stradd(tempMatrix[row][nb], str);
		nb++;
	}
}
