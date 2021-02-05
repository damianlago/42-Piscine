#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int     main(void)
{
    int a = 7;
    int b = 8;
    printf("%d", a);
    printf("%d", b);
    ft_swap(&a, &b);
    printf("%d", a);
    printf("%d", b);
    return (0);
}