/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_print_comb2.c								   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: aramarak <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/09/08 14:32:04 by aramarak		  #+#	#+#			 */
/*   Updated: 2024/09/08 19:13:24 by aramarak		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_make_combo(short a, short b, char not_end)
{
	ft_putchar(48 + (a / 10));
	ft_putchar(48 + (a % 10));
	ft_putchar(' ');
	ft_putchar(48 + (b / 10));
	ft_putchar(48 + (b % 10));
	if (not_end)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	short	a;
	short	b;
	char	not_end;

	a = 0;
	not_end = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a == 98 && b == 99)
			{
				not_end = 0;
			}
			else
			{
				not_end = 1;
			}
			ft_make_combo(a, b, not_end);
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
