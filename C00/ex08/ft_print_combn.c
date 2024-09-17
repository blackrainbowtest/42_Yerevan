/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_print_combn.c								   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: aramarak <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/09/08 18:15:02 by aramarak		  #+#	#+#			 */
/*   Updated: 2024/09/08 19:12:53 by aramarak		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <unistd.h>

void	pt_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_print_comb()
{

}

void	ft_make_comb(int *num_arr)
{

}

void	ft_print_combn(int n)
{
	if (n > 0 && n <= 10)
	{
		int		i;
		int		num_arr[n];

		i = 0;
		while (i < n)
		{
			num_arr[i] = i;
			f_make_comb(num_arr);
			i++;
		}
	}
}

int	main(void)
{
	ft_print_combn(5);
}
