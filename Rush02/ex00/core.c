#include "lib.h"
#include "utils.h"

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
	static int	count;

	count = 0;
	if (i * 3 <= len)
		ft_process_three(num, len, i, &count);
	else if ((i - 1) * 3 + 2 <= len)
		ft_process_two(num, len, i, &count);
	else if ((i - 1) * 3 + 1 <= len)
		ft_process_one(num, len, i, &count);
}
