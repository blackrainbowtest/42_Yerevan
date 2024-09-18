#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	i;

	length = 0;
	i = 0;
	if (size == 0)
	return (length);
	while (src[length])
		length++;
	while (src[i] && (i < (size - 1)))
		dest[i] = src[i++];
	dest[i] = '\0';
	return (length);
}

#include <stdio.h>
int	main(void)
{
	char	str[50] = "test5";
	printf("%u", ft_strlcpy(str, "test", 4));
	return (0);
}