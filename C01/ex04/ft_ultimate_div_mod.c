/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:15:04 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/09 20:36:47 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int		temp1;
	int		temp2;

	temp1 = *a / *b;
	temp2 = *a % *b;
	*a = temp1;
	*b = temp2;
}
/*
int	main(void)
{
	int		a;
	int		b;

	a = 5;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("a-%d, b-%d", a, b);
	return (0);
}
*/
