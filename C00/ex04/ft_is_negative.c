/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_is_negative.c								   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: aramarak <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/09/08 13:37:46 by aramarak		  #+#	#+#			 */
/*   Updated: 2024/09/08 13:48:57 by aramarak		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(0);
	return (0);
}
*/
