/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_print_comb.c									:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: aramarak <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/09/08 13:50:10 by aramarak		  #+#	#+#			 */
/*   Updated: 2024/09/08 16:47:00 by aramarak		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_print_comb(void)
{
	int		num1;
	int		num2;
	int		num3;

	num1 = '0';
	while (num1 <= '7')
	{
		num2 = num1 + 1;
		while (num2 <= '8')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				ft_putchar(num1);
				ft_putchar(num2);
				ft_putchar(num3);
				if (num1 != '7')
					write(1, ", ", 2);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
