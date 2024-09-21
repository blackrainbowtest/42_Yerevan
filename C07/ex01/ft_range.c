/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:03:49 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/21 17:34:02 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		size;
	int		i;
	int		*buff;

	if (min >= max)
		return (0);
	i = 0;
	size = max - min;
	buff = (int *)malloc(size * sizeof(int));
	if (!buff)
		return (0);
	while (i < size)
	{
		buff[i] = min + i;
		i++;
	}
	return (buff);
}
/*
#include <stdio.h>
int	main(void)
{
	int		start;
	int		end;
	int		i;
	int		*arr;
	int		size;

	start = -2;
	end = -5;
	size = end - start;
	arr = ft_range(start, end);
	i = 0;
	while (i < size)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}*/
