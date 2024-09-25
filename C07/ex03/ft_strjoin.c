/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:08:40 by aramarak          #+#    #+#             */
/*   Updated: 2024/09/25 21:52:59 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_empty_string(void)
{
	char	*empty;

	empty = (char *)malloc(sizeof(char) * 1);
	if (!empty)
		return (0);
	empty[0] = '\0';
	return (empty);
}

int	ft_strlng(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_full_length(int size, char **str, int sep_length)
{
	int		str_lng;
	int		i;

	i = 0;
	str_lng = 0;
	while (i < size)
	{
		str_lng += ft_strlng(str[i]);
		str_lng += sep_length;
		i++;
	}
	if (size > 0)
		str_lng -= sep_length;
	return (str_lng);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_length;
	int		i;
	char	*str;
	char	*ptr;

	if (size == 0)
		return (ft_empty_string());
	i = -1;
	total_length = ft_full_length(size, strs, ft_strlng(sep));
	str = (char *)malloc(sizeof(char) * (total_length + 1));
	if (!str)
		return (0);
	ptr = str;
	while (++i < size)
	{
		ptr = ft_strcpy(ptr, strs[i]);
		ptr += ft_strlng(strs[i]);
		if (i < (size - 1))
		{
			ptr = ft_strcpy(ptr, sep);
			ptr += ft_strlng(sep);
		}
	}
	*ptr = '\0';
	return (str);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	int		i;
	char	**str_arr;
	char	*sep;
	char	*result;

	str_arr = (char **)malloc(2 * sizeof(char *));
	if (!str_arr)
		return (1);
	str_arr[0] = (char *)malloc(sizeof(char) * 25);
	str_arr[1] = (char *)malloc(sizeof(char) * 25);
	
	strcpy(str_arr[0], "test");
	strcpy(str_arr[1], "some");

	sep = " ";
	result = ft_strjoin(2, str_arr, sep);
	printf("%s in-%p\n", result, result);
	free(result);
	i = 0;
	while (i < 2)
	{
		free(str_arr[i]);
		i++;
	}
	free(str_arr);

	system("leaks a.out");
	return (0);
}*/
