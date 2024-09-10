/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:21:41 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/10 20:31:46 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	char	*first;

	first = dest;
	while (*src != '\0')
	{
		*dest = *src;
		++src;
		++dest;
	}
	*dest = '\0';
	return (first);
}
/*
int	main(void)
{
	char	dest[7];
	char	src[] = "hello";

	printf("%s", ft_strcpy(dest, src));
	return (0);
}
*/
