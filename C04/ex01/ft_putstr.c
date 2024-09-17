/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:23:22 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/16 21:27:54 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	nb;

	nb = 0;
	while (str[nb])
	{
		write(1, &str[nb], 1);
		nb++;
	}
}
/*
int	main(void)
{
	ft_putstr("test");
	return (0);
}*/
