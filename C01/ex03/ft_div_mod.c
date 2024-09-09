/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:58:12 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/09 20:07:37 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;

	a = 15;
	b = 4;
	ft_div_mod(a, b, &div, &mod);
	printf("a-%d, b-%d, div-%d, mod-%d\n", a, b, div, mod);
	return (0);
}
*/
