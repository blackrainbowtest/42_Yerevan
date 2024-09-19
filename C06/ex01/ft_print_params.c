/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:46:20 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/19 19:47:06 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		nb;
	int		i;

	nb = 1;
	while (nb < argc)
	{
		i = 0;
		while (argv[nb][i])
		{
			write(1, &argv[nb][i], 1);
			i++;
		}
		write(1, "\n", 1);
		nb++;
	}
	return (0);
}
