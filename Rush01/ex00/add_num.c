/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_num.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:22:36 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/15 20:17:54 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern char	***g_tempMatrix;
extern int	g_rows;
extern int	g_cols;
void	ft_stradd(char *dest, const char *src);
void	int_to_str(int num, char *str);
void	ft_set_matric_data(int row, int col, char *str);

int	ft_add_number(int num, int row, int col, int **matrix)
{
	int		i;
	char	str[3];

	i = 0;
	matrix[row][col] = num;
	while (i < g_cols)
	{
		int_to_str(num, str);
		if (!matrix[i][col])
		{
			ft_stradd(g_tempMatrix[i][col], str);
		}
			ft_set_matric_data(row, col, str);
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
			ft_set_matric_data(row, col, str);
		i++;
	}
	return (0);
}

void	ft_set_matric_data(int row, int col, char *str)
{
	int		nb;

	nb = 0;
	while (nb < g_rows)
	{
		if (nb != row)
			ft_stradd(g_tempMatrix[nb][col], str);
		if (nb != col)
			ft_stradd(g_tempMatrix[row][nb], str);
		nb++;
	}
}
