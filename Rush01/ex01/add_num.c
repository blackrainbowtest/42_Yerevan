/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_num.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:22:36 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/15 19:27:49 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern char ***tempMatrix;
extern int		rows;
extern int		cols;
void	ft_stradd(char *dest, const char *src);
void	int_to_str(int num, char *str);

int	ft_add_number(int num, int row, int col, int **matrix)
{
	int		i;
	char	str[3];

	i = 0;
	matrix[row][col] = num;
	while (i < cols)
	{
		int_to_str(num, str);
		if (!matrix[i][col])
			ft_stradd(tempMatrix[i][col], str);
		i++;
	}
	i = 0;
	while (i < rows)
	{
		int_to_str(num, str);
		if (!matrix[row][i])
			ft_stradd(tempMatrix[row][i], str);
		i++;
	}
	return (0);
}
