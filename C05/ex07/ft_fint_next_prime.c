int ft_is_prime(int nb)
{
	int		i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_find_next_prime(7));
	return (0);
}
