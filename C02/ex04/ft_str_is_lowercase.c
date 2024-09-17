/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 20:33:13 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/11 20:41:19 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 'z' || str[i] < 'a')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_str_is_lowercase("asdfghjkl"));
	printf("%d", ft_str_is_lowercase("Asdfghjkl"));
	printf("%d", ft_str_is_lowercase(""));
	return (0);
}
*/
