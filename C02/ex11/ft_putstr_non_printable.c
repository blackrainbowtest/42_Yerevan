#include <unistd.h>

void ft_display(char c)
{
	write(1, &c, 1);
}

int	ft_can_print(char c)
{
	return (c <= 126 && c >= 32);
}

void ft_putstr_non_printable(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (ft_can_print(str[i]))
			ft_display(str[i]);
		else
		{
			ft_display('\\');
			ft_display("0123456789abcdef"[str[i] / 16]);
			ft_display("0123456789abcdef"[str[i] % 16]);
		}
	}
}

int main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return (0);
}