/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:57:11 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/11 20:42:26 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > '9' || str[i] < '0')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_str_is_numeric(""));
	printf("%d", ft_str_is_numeric("0123456789"));
	printf("%d", ft_str_is_numeric("012345678a"));
	return (0);
}
*/
