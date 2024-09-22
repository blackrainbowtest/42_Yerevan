#include "lib.h"
#include "utils.h"

void	ft_print_three_helper(char *str, int count, int *is_first)
{
	char	**dict_data;
	int		i;
    int     is_exit;

	i = 0;
    is_exit = 1;
	dict_data = static_save(NULL);
	if (str[0] == '0')
	{
		ft_print_two(++str, count, *is_first);
		*is_first = 0;
	}
	else
	{
		while (dict_data[i] && is_exit)
		{
			if (dict_data[i][0] == str[0] && dict_data[i][1] == ':')
			{
				ft_get_word(i);
				ft_get_tail(0);
				is_exit = 0;
			}
			i++;
		}
		ft_print_two(++str, count, 0);
	}
}

void    ft_process_teen_digits(char *str)
{
	int		i;
	char	**dict_data;

	dict_data = static_save(NULL);
	i = 0;
	while (dict_data[i])
	{
		if (dict_data[i][0] == str[0] && dict_data[i][1] == str[1])
		{
			ft_get_word(i);
			break;
		}
		i++;
	}
}

void    ft_process_tens_digits(char *str, int count)
{
	int		i;
	char	**dict_data;

	dict_data = static_save(NULL);
	i = 0;
	while (dict_data[i])
	{
		if (dict_data[i][0] == str[0] && dict_data[i][1] == '0')
		{
			ft_get_word(i);
			if (str[1] != '0')
				ft_print_one(++str, count, 0);
			break;
		}
		i++;
	}
}