/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggevorgi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:40:19 by ggevorgi          #+#    #+#             */
/*   Updated: 2024/09/07 16:11:57 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	ft_print_lane(char first, char mid, char last, int column)
{
	int		cell;

	cell = 1;
	while (cell <= column)
	{
		if (cell == 1)
		{
			ft_putchar(first);
		}
		else if (cell == column)
		{
			ft_putchar(last);
		}
		else
		{
			ft_putchar(mid);
		}
		cell++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		row;

	row = 1;
	if (x >= 1 && y >= 1)
	{
		while (row <= y)
		{
			if (row == 1)
			{
				ft_print_lane('/', '*', '\\', x);
			}
			else if (row < y)
			{
				ft_print_lane('*', ' ', '*', x);
			}
			else
			{
				ft_print_lane('\\', '*', '/', x);
			}
			row++;
		}
	}
}
