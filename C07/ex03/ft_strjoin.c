#include <stdlib.h>

int	ft_strlng(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_str_total_length(int size, char **str, int sep_lng)
{
	int		str_lng;
	int		i;

	i = 0;
	str_lng = 0;
	while (i < size)
	{
		str_lng += ft_strlng(str[i]);
		str_lng += sep_lng;
		i++;
	}
	if (size > 0)
		str_lng -= sep_lng;
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

char *ft_if_empty(void)
{
	char *empty;

	empty = (char *)malloc(sizeof(char));
	if (!empty)
		return (0);
	empty[0] = '\0';
	return (empty);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_length;
	int		i;
	char	*str;
	char	*ptr;

	if (size == 0)
		return ft_if_empty();
	i = 0;
	total_length = ft_str_total_length(size, strs, ft_strlng(sep));
	str = (char *)malloc(sizeof(char) * (total_length + 1));
	if (!str)
		return (0);
	ptr = str;
	while (i < size)
	{
		ptr = ft_strcpy(ptr, strs[i]);
		ptr += ft_strlng(strs[i]);
		if (i < (size - 1))
		{
			ptr = ft_strcpy(ptr, sep);
			ptr += ft_strlng(sep);
		}
		i++;
	}
	*ptr = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	int		i;
	char	**str_arr;
	char	*sep;

	str_arr = (char **)malloc(2 * sizeof(char *));
	if (!str_arr)
		return (1);
	str_arr[0] = (char *)malloc(sizeof(char) * 25);
	str_arr[1] = (char *)malloc(sizeof(char) * 25);
	str_arr[0] = "test";
	str_arr[1] = "some";
	sep = " ";
	printf("%s\n", ft_strjoin(2, str_arr, sep));
	free(str_arr);
	return (0);
}*/