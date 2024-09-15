/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_print_numbers.c								 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: aramarak <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/09/08 13:34:38 by aramarak		  #+#	#+#			 */
/*   Updated: 2024/09/08 13:34:50 by aramarak		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	ch;

	ch = '0';
	while (ch <= '9')
	{
		write(1, &ch, 1);
		ch++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
