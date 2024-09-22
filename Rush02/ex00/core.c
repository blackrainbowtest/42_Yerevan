#include "lib.h"

#include <stdio.h> //FIXME: delete after debug

int	ft_core(char *str, char *dict)
{
	char	*content;
	char	**dict_data;
	int		total_bytes;

	content = ft_read_file_data(dict, &total_bytes);
	if (!content)
		return (1);
	dict_data = ft_split_content(content, total_bytes);
	static_save(dict_data);
	free(content);
	if (!dict_data)
		return (1);
	ft_process_dict_data(str, ft_strlen(str), 1);
	free(dict_data);
	return (0);
}

char	**static_save(char **base)
{
	static char	**tmp = NULL;

	if (base != NULL)
		tmp = base;
	return (tmp);
}

void	ft_process_dict_data(char *num, int len, int i)
{
	char		arr[4];
	int			m;
	int			start;
	int			end;
	int static	count;

	m = 0;
	start = len - i * 3;
	if (start < 0)
		start = 0;
	end = start + 3;
	if (i * 3 <= len)
	{
		while (start < end && start < len)
			arr[m++] = num[start++];
		arr[m] = '\0';
		count++;
		if (!(i * 3 >= len))
			ft_process_dict_data(num, len, i + 1);
		ft_print_three(arr, --count, 1);
	}
	else if ((i - 1) * 3 + 2 <= len)
	{
		end--;
		while (start < end && start < len)
			arr[m++] = num[start++];
		arr[m] = '\0';
		count++;
		if (!(i * 3 >= len))
			ft_process_dict_data(num, len, i + 1);
		ft_print_two(arr, --count, 1);
	}
	else if ((i - 1) * 3 + 1 <= len)
	{
		printf("%s\n", "testt");
		arr[0] = num[0];
		m = 1;
		arr[m] = '\0';
		count++;
		if (!(i * 3 >= len))
			ft_process_dict_data(num, len, i + 1);
		ft_print_one(arr, --count, 1);
	}
	
}

// FIXEME: need modified this code, need find current max length of rows and make arr by that responcive one
/*
	// Need something like this for checking max length of current string when we spliting them by \n
	while (str[i] != '\0')
	{
		if in curr row i dont get \0 or \n
	}

*/
char	**ft_split_content(char *str, int total_bytes)
{
	int		i;
	int		j;
	int		m;
	char	*arrm;
	char	**strs;

	i = 0;
	m = 0;
	j = 0;
	strs = (char **)malloc(41 * sizeof(char *));
	if (!strs)
		return (0);
	while (i < 41)
	{
		arrm = (char *)malloc(46);
		if (!arrm)
			return (0);
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