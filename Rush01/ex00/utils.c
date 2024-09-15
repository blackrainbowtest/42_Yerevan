/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:00:32 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/15 20:41:19 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void ft_stradd(char *dest, const char *src) 
{
    const char *d = dest;
    const char *s;

    while (*d) 
    {
        const char *start = d;
        s = src;
        while (*d && *s && *d == *s) {
            d++;
            s++;
        }
        if (*s == '\0')
            return;
        d = start + 1;
    }
    while (*dest)
        dest++;
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
}

void int_to_str(int num, char *str)
{
    str[0] = '-';
    str[1] = (num % 10) + '0';
    str[2] = '\0';
}

int	ft_check_matrix_full(int rows, int cols, int **matrix)
{
	int		i;
	int		j;

	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			if (matrix[i][j] == 0)
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
