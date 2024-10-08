#include "lib.h"
#include "utils.h"

void	ft_print_three(char *str, int count, int is_first)
{
	ft_print_three_helper(str, count, &is_first);
	if (is_first && (count > 0))
		ft_get_tail(count);
}

void	ft_print_two(char *str, int count, int is_first)
{
	if (str[0] == '0')
	{
		ft_print_one(++str, count, is_first);
		is_first = 0;
	}
	else if (str[0] == '1')
	{
		ft_process_teen_digits(str);
	}
	else if (str[0] >= '2' && str[0] <= '9')
	{
		ft_process_tens_digits(str, count);
	}
	if (is_first && (count > 0))
		ft_get_tail(count);
}

void	ft_print_one(char *str, int count, int is_first)
{
	char	**dict_data;
	int		i;
	int		is_exit;

	dict_data = static_save(NULL);
	i = 0;
	is_exit = 1;
	if (str[0] != '0')
	{
		while (dict_data[i] && is_exit == 1)
		{
			if (dict_data[i][0] == str[0] && dict_data[i][1] == ':')
			{
				ft_get_word(i);
				is_exit = 0;
			}
			i++;
		}
	}
	if (is_first && (count > 0))
		ft_get_tail(count);
}

void	ft_get_word(int index)
{
	int		i;
	int		is_word;
	char	**buff;

	buff = static_save(NULL);
	i = 0;
	is_word = 0;
	while (buff[index][i])
	{
		if (is_word)
			write(1, &buff[index][i], 1);
		if (buff[index][i] == ':')
			is_word = 1;
		i++;
	}
}

int	ft_get_tail(int div)
{
	int		count;
	int		i;
	int		dig_count;
	char	**buff;

	count = 1 + (3 * div);
	if (div == 0)
		count = 3;
	i = 0;
	buff = static_save(NULL);
	while (buff[i])
	{
		dig_count = ft_count_digits(buff[i]);
		if (dig_count == count)
		{
			ft_get_word(i);
			return (0);
		}
		i++;
	}
	return (0);
}
