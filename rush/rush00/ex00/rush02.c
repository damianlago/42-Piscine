/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalave- <amalave-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:23:11 by amalave-          #+#    #+#             */
/*   Updated: 2020/11/29 17:33:09 by amalave-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int v;
	int h;

	v = 1;
	h = 1;
	while (v <= y)
	{
		while (h <= x)
		{
			if ((h == 1 && v == 1) || (h == x && v == 1))
				ft_putchar('A');
			else if (((v == y) && ((h == x && x > 1))) || (h == 1 && v == y))
				ft_putchar('C');
			else if ((v > 1 && v < y) && (h > 1 && h < x))
				ft_putchar(' ');
			else
				ft_putchar('B');
			if (h == x && v < y)
				ft_putchar('\n');
			h++;
		}
		v++;
		h = 1;
	}
}
