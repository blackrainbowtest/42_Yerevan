#include "lib.h"
#include "utils.h"

char	**ft_init_strs(int count, int length)
{
	char	**strs;
	int		i;

	strs = (char **)malloc(count * sizeof(char *));
	if (!strs)
		return (0);
	i = 0;
	while (i < count)
	{
		strs[i] = (char *)malloc(length);
		if (!strs[i])
			return (0);
		i++;
	}
	return (strs);
}

void	ft_fill_strs(char *str, char **strs)
{
	int		i;
	int		j;
	int		m;

	i = 0;
	j = 0;
	m = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			strs[j][m] = '\0';
			j++;
			m = 0;
		}
		else
		{
			strs[j][m] = str[i];
			m++;
		}
		i++;
	}
}

char	**ft_split_content(char *str, int total_bytes)
{
	char	**strs;

	strs = ft_init_strs(41, 46);
	if (!strs)
		return (0);
	ft_fill_strs(str, strs);
	return (strs);
}
