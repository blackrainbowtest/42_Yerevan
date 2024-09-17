/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:03:21 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/14 13:11:38 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src && nb)
	{
		dest[i] = *src;
		i++;
		nb--;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[50] = "some text";
	printf("%s", ft_strncat(str, "some", 3));
	return (0);
}*/
