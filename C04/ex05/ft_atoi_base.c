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
	len = ft_string;
	if (len < 2)
		return (0);
	while (str[i])
	{
		if (str[i] <= 32 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
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



int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		nb;
	int		nb2;
	int		base_lng;

	nb = 0;
	i = 0;

}

int	main(void)
{
	printf("%d\n", ft_atoi_base());
	return (0);
}
