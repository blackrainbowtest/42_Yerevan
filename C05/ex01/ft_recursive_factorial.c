int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return nb * ft_recursive_factorial(nb - 1);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_factorial(9));
	return (0);
}
