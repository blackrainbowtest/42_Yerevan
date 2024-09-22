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
