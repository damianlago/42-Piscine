/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 12:32:57 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/14 16:45:50 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_nbrlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_check_base(char *str)
{
	int i;
	int len;

	i = 0;
	len = ft_nbrlen(str);
	while (str[i] != '\0')
	{
		if (str[i] == str[i + 1] || len > 1 || str[i] == '-' || str[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int res;
	int len;
	
	res = nbr;
	len = ft_nbrlen(base);
	while (res != 0)
	{
		res = res % len;
		printf("%c", base[res]);	
	}
}

int		main(void)
{
	int nbr = 1234;
	char base[] = "poniguay";
	ft_putnbr_base(nbr, base);
}
