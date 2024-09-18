int	ft_iterative_power
{
	int		result;

	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power-- > 0)
		result *= nb;
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(3, 4));
	return (0);
}*/
