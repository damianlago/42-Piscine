#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

void    ft_rev(char *str)
{
    int i;
    int len;

    i = 0;
    len = ft_strlen(str);
    while (str[i] != '\0')
    {
        ft_putchar(str[len - i - 1]);
        i++;
    }
}

int     main(int argc, char *argv[])
{
    if (argc == 2)
    {
       ft_rev(argv[1]);
    }
    else
        ft_putchar('\n');

}