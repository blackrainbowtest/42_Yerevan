/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:26:10 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/21 15:01:25 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*buff;
	int		i;

	buff = (char *)malloc(ft_strlen(src) + 1);
	if (!buff)
		return (0);
	i = 0;
	while (src[i])
	{
		buff[i] = src[i];
		i++;
	}
	buff[i] = '\0';
	return (buff);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*test;
	test = ft_strdup("test");
	printf("text: %s pointer: %p\n", test, test);
	free(test);
	return (0);
}*/
