/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:35:08 by apetoyan          #+#    #+#             */
/*   Updated: 2024/09/21 17:44:07 by apetoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

void div_ft(char *num, int len, int i)
//		   "012345", 		6,     1
{
	char arr[4];
	int m;
	int start;
	int end;
	
	m = 0;
	start = len - i * 3;
	end = start + 3;
	if (i * 3 <= len)
	{
		while (start < end)
		{
			arr[m] = num[start];
			m++;
			start++;
		}
	}
	else if ((i - 1) * 3 + 2 <= len)
	{
		start++;
		while (start < end) {
			arr[m] = num[start];
			m++;
			start++;
		}
	}
	arr[m] = '\0';



	if (i * 3 > len)
	{
		printf("%s\n", arr);
		return ;
	}
	div_ft(num, len, i + 1);
	printf("%s\n", arr);
}

char **split_arr(char *str)
{
	int	i;
	int	j;
	int	m;
	char *arrm;
	char **strs;
	
	i = 0;
	m = 0;
	j = 0;
	strs = (char **)malloc(41 * sizeof(char *));
	if (!strs)
		return 0;
	while (i < 41)
	{
		arrm = (char *)malloc(46);
		if (!arrm)
			return 0;
		strs[i] = arrm;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			strs[j][m] = '\0';
			j++;
			m = 0;
		} else {
			strs[j][m] = str[i];
			m++;
		}
		i++;
	}
	return strs;
}


int main() {
	int fd;
	char arr[690];
	char **strs;

	fd = open("numbers.dict", O_RDONLY, 0);
	int n_read = read(fd, arr, 1024);
	arr[n_read] = '\0';

	strs = split_arr(arr);	
	int i = 0;

	div_ft("12345789", 8, 1);
	//printf("%s\n", strs[0]);
/*
	while (arr1[i])
	{
		printf("%c", arr1[i]);
		i++;
	}
*/
/*
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
*/
	//printf("%d\n", som);
//	printf("%d\n", fd);
}
