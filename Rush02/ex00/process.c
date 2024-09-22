#include "lib.h"
#include "utils.h"

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
	(*count)++;
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
	(*count)++;
	if (!(i * 3 >= len))
		ft_process_dict_data(num, len, i + 1);
	ft_print_two(arr, --(*count), 1);
}

void	ft_process_one(char *num, int len, int i, int *count)
{
	char	arr[2];

	arr[0] = num[len - i * 3];
	arr[1] = '\0';
	(*count)++;
	if (!(i * 3 >= len))
		ft_process_dict_data(num, len, i + 1);
	ft_print_one(arr, --(*count), 1);
}
