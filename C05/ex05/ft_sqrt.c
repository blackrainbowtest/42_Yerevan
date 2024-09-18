int	ft_sqrt(int nb)
{
	long		i;

	i = nb / 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i >= nb)
	{
		if (i * i == nb)
			return ((int)i);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(81));
	return (0);
}*/
