/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:48:57 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/14 13:04:47 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	ch[50] = "test text, ";
	char	ch1[10] = "some mode";
	printf("%s", ft_strcat(ch, ch1));
	return (0);
}*/
