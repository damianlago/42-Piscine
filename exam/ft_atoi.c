#include <unistd.h>
#include <stdio.h>

int     ft_atoi(const char *str)
{
    int i, sign;
    long res;

    i = 0;
    sign = 1;
    res = 0;
    while (str[i] == ' ')
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res * sign);
}

int     main(void)
{
    const char str[] = "--+-6547b";
    printf("%d", ft_atoi(str));
    return (0);
}