/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:46:53 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/10 21:38:45 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*start;
	int		i;

	i = 0;
	start = dest;
	while (i < n)
	{
		if (*src != '\0')
		{
			*dest = *src;
			++src;
		}
		else
		{
			*dest = '\0';
		}
		++dest;
		++i;
	}
	return (start);
}
/*
int	main(void)
{
	char	dest[10];
	char	src[] = "test";
	int		n = 9;

	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}
*/
