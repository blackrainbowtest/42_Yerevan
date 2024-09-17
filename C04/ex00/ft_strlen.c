/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:17:50 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/16 21:22:12 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		nb;

	nb = 0;
	while (str[nb])
		nb++;
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_strlen("test"));
	return (0);
}*/
