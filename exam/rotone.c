#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_replace(char *str)
{
    int i; 

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'y') || (str[i] >= 'a' && str[i] <= 'Y'))
            ft_putchar(str[i] +  1);
        else if (str[i] == 'z' || str[i] == 'Z')
            ft_putchar('a');
        i++;
    }
}

int     main(int argc, char **argv)
{
    if (argc == 2)
        ft_replace(argv[1]);
    else
        ft_putchar('\n');
    return (0);
}