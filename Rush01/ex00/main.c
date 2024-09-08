/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:38:02 by ggevorgi          #+#    #+#             */
/*   Updated: 2024/09/08 18:25:13 by ggevorgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
int		atoi(char *str);

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc != 3)
	{
		write(1, "we need \"x\" and \"y\" arguments for output!", 45);
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	if (x > 200 || y > 200)
	{
		write(1, "max value for variables is 200!", 31);
		return (1);
	}
	rush(x, y);
	return (0);
}

int	atoi(char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			write(1, "\"x\" and \"y\" will be integer!", 28);
			return (0);
		}
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}
