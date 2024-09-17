/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:37:00 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/16 21:07:09 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlength(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_l;
	unsigned int	src_l;
	unsigned int	nb;

	dest_l = ft_strlength(dest);
	src_l = ft_strlength(src);
	if (size == 0 || size <= dest_l)
		return (dest_l + src_l);
	nb = 0;
	while (src[nb] && (dest_l + nb) < (size - 1))
	{
		dest[dest_l + nb] = src[nb];
		nb++;
	}
	dest[dest_l + nb] = '\0';
	return (dest_l + src_l);
}

unsigned int	ft_strlength(char *str)
{
	unsigned int	nb;

	nb = 0;
	while (str[nb])
		nb++;
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[15] = "Hello";
	char	*str2 = " world";
	printf("%u", ft_strlcat(str, str2, 15));
	printf("%s", str);
	return (0);
}*/
