#include <unistd.h>

int	is_valid_base(char *base)
{
	int i, j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i >= 2);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;

	size = 0;
	if (!is_valid_base(base))
		return;
	while (base[size])
		size++;
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr == -2147483648)
        {
            write(1, "2147483648", 10);
            return;
        }
		nbr = -nbr;
	}
	if (nbr >= size)
        ft_putnbr_base(nbr / size, base);
    ft_putchar(base[nbr % size]);
}
/*
int main(void)
{
	ft_putnbr_base(255, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(-255, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(255, "01");
	write(1, "\n", 1);
	return (0);
}*/