#include "lib.h"

void ft_print_three(char *str, int count, int is_first)
{
    char    **dict_data;
	int		i;

	// printf("\n%s I put 3 in 2\n", str);
	i = 0;
    dict_data = static_save(NULL);
    if (str[0] == '0')
    {
        ft_print_two(++str, count, is_first);
		is_first = 0;
    }
    else
	{
		while (dict_data[i])
		{
			if (dict_data[i][0] == str[0] && dict_data[i][1] == ':')
			{
				ft_get_word(i);
				ft_get_tail(0);
				break;
			}
			i++;
		}
        ft_print_two(++str, count, 0);
	}
	if (is_first && count > 0)
		ft_get_tail(count);
}

void ft_print_two(char *str, int count, int is_first)
{
    char    **dict_data;
	int		i;

    dict_data = static_save(NULL);
	i = 0;
    if (str[0] == '0')
	{
        ft_print_one(++str, count, is_first);
		is_first = 0;
	}
    else
	{
		while (dict_data[i])
		{
			if (str[0] == '1' && dict_data[i][1] == str[1])
				if(dict_data[i][0] == str[0] && dict_data[i][1] == str[1])
				{
					ft_get_word(i);
					break;
				}
			if (str[0] >= '2' && str[0] <= '9' && dict_data[i][0] == str[0] && dict_data[i][1] == '0')
			{
				ft_get_word(i);
				if (str[1] != '0')
					ft_print_one(++str, count, 0);
				break;
			}
			i++;
		}
		
	}
	if (is_first && count > 0)
		ft_get_tail(count);
}

void ft_print_one(char *str, int count, int is_first)
{
    char    **dict_data;
	int		i;
	dict_data = static_save(NULL);
	i = 0;
	if (str[0] != '0')
	{
		while (dict_data[i])
		{
			if (dict_data[i][0] == str[0] && dict_data[i][1] == ':')
			{
				ft_get_word(i);
				break;
			}
			i++;
		}
	}
	if (is_first && count > 0)
		ft_get_tail(count);
}

void ft_get_word(int index)
{
    int     i;
    int     is_word;
    char    **buff;

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

void	ft_get_tail(int div)
{
	int		count;
	int		i;
	int		j;
	int		dig_count;
	char    **buff;

	count = 1 + (3 * div);
	if (div == 0)
		count = 3;
	j = 0;
	dig_count = 0;
	i = 0;
	buff = static_save(NULL);
	while (buff[i])
	{
		while (buff[i][j] >= '0' && buff[i][j] <= '9')
		{
			dig_count++;
			j++;
		}
		if (dig_count == count)
		{
			ft_get_word(i);
			break;
		}
		i++;
	}
}