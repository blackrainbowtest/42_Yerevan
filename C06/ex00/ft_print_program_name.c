/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:45:44 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/19 19:45:59 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		nb;

	nb = 0;
	while (argv[0][nb] != '\0' && argc)
	{
		write(1, &argv[0][nb], 1);
		nb++;
	}
	write(1, "\n", 1);
	return (0);
}
