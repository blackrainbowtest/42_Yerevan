/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:34:42 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/21 18:50:44 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}
/*
#include <stdio.h>
int	main(void)
{
	int		min;
	int		max;
	int		*arr;
	int		range;
	int		i;

	i = 0;
	min = 1;
	max = 3;
	range = ft_ultimate_range(&arr, min, max);
	while (i < range)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	return (0);
}*/
