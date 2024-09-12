/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:05:20 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/12 20:38:14 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strlower(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	j;

	i = 0;
	j = 1;
	ft_strlower(str);
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && j)
		{
			j = 0;
			str[i] -= 32;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			j = 0;
		else if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= '0' && str[i] <= '9'))
			j = 1;
		i++;
	}
	return (str);
}
