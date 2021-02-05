/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:46:20 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/11/30 20:46:27 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	y = 1;
	while (x <= 98)
	{
		while (y <= 99)
		{
			if (x != y)
			{
				ft_putchar((x / 10) + '0');
				ft_putchar((x % 10) + '0');
				ft_putchar(' ');
				ft_putchar((y / 10) + '0');
				ft_putchar((y % 10) + '0');
				if (x < 98)
					write(1, ", ", 2);
			}
			y++;
		}
		y = 1 + x;
		x++;
	}
}
