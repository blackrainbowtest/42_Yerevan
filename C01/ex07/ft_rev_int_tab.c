/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:03:16 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/09 21:20:11 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		printf("%d, %d\n", i, size - 1 - i);
		i++;
	}
}
/*
int	main(void)
{
	int		tab[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int		size = 10;
	int		i = 0;

	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i++]);
	}
	return (0);
}
*/
