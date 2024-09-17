/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:19:38 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/11 21:26:40 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 'Z' || str[i] < 'A')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_str_is_uppercase("ASDFG"));
	printf("%d", ft_str_is_uppercase("aSDFG"));
	printf("%d", ft_str_is_uppercase(""));
	return (0);
}*/
