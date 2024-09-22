#include "lib.h"
#include "utils.h"

void	ft_process_dict_data(char *num, int len, int i)
{
	static int	count;

	count++;
	if (i * 3 <= len)
		ft_process_three(num, len, i, &count);
	else if ((i - 1) * 3 + 2 <= len)
		ft_process_two(num, len, i, &count);
	else if ((i - 1) * 3 + 1 <= len)
		ft_process_one(num, len, i, &count);
}

void	ft_process_three(char *num, int len, int i, int *count)
{
	char	arr[4];
	int		start;
	int		m;

	start = len - i * 3;
	m = 0;
	while (start < len && m < 3)
	{
		arr[m++] = num[start++];
	}
	arr[m] = '\0';
	if (!(i * 3 >= len))
		ft_process_dict_data(num, len, i + 1);
	ft_print_three(arr, --(*count), 1);
}

void	ft_process_two(char *num, int len, int i, int *count)
{
	char	arr[4];
	int		start;
	int		end;
	int		m;

	start = len - i * 3 + 1;
	end = start + 2;
	m = 0;
	while (start < end && start < len)
	{
		arr[m++] = num[start++];
	}
	arr[m] = '\0';
	if (!(i * 3 >= len))
		ft_process_dict_data(num, len, i + 1);
	ft_print_two(arr, --(*count), 1);
}

void	ft_process_one(char *num, int len, int i, int *count)
{
	char	arr[2];

	arr[0] = num[len - i * 3];
	arr[1] = '\0';
	if (!(i * 3 >= len))
		ft_process_dict_data(num, len, i + 1);
	ft_print_one(arr, --(*count), 1);
}

int	ft_count_digits(char *str)
{
	int		j;
	int		dig_count;

	j = 0;
	dig_count = 0;
	while (str[j] >= '0' && str[j] <= '9')
	{
		dig_count++;
		j++;
	}
	return (dig_count);
}
