/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_print_reverse_alphabet.c						:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: aramarak <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/09/08 13:33:58 by aramarak		  #+#	#+#			 */
/*   Updated: 2024/09/08 13:34:09 by aramarak		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ch;

	ch = 'z';
	while (ch >= 'a')
	{
		write(1, &ch, 1);
		ch--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
