void ft_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void ft_stradd(char *dest, const char *src) 
{
    const char *d = dest;
    const char *s;

    while (*d) 
    {
        const char *start = d;
        s = src;
        while (*d && *s && *d == *s) {
            d++;
            s++;
        }
        if (*s == '\0')
            return;
        d = start + 1;
    }
    while (*dest)
        dest++;
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
}

void int_to_str(int num, char *str)
{
    str[0] = '-';
    str[1] = (num % 10) + '0';
    str[2] = '\0';
}