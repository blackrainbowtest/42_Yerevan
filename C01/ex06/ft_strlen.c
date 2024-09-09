/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:51:13 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/09 21:02:18 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i++] != '\0')
		;
	return (i - 1);
}
/*
int	main(void)
{
	char	*str;
	int		a;

	str = "test";
	a = ft_strlen(str);
	printf("%d", a);
	return (0);
}
*/
