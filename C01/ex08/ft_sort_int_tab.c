/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:22:45 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/09 22:34:27 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int		temp;
	int		i;
	int		j;

	j = size;
	while (j > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j--;
	}
}
/*
int	main(void)
{
	int		tab[10] = {1, 5, 7, 9, 3, 6, 4, 2, 8};
	int		size = 10;
	int		i = 0;

	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d, ", tab[i++]);
	}
	return (0);
}
*/
