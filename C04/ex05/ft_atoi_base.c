int	ft_strlng(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_str_check(char *str)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	len = ft_strlng(str);
	if (len < 2)
		return (0);
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-'
			|| str[i] > 126 || str[i] <= ' ' )
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (len);
}

int	ft_get_base(char str, char *base)
{
	int		nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	ft_base_sign(char *str, int *p_start_from)
{
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*p_start_from = i;
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int		start_from;
	int		sign;
	int		nb;
	int		nb2;
	int		base_lng;

	nb = 0;
	start_from = 0;
	base_lng = ft_str_check(base);
	if (base_lng)
	{
		sign = ft_base_sign(str, &start_from);
		nb2 = ft_get_base(str[start_from], base);
		while (nb2 != -1)
		{
			nb = (nb * base_lng) + nb2;
			start_from++;
			nb2 = ft_get_base(str[start_from], base);
		}
		return (nb *= sign);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi_base("1010", "-01"));
	printf("%d\n", ft_atoi_base("-2FF", "0123456789ABCDEF"));
	return (0);
}*/
