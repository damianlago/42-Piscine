/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:12:45 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/11/29 15:35:35 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int row;
	int col;

	row = 1;
	col = 1;
	while (row <= y)
	{
		while (col <= x)
		{
			if ((row == 1 && col == 1) || (row == y && col == y && y > 1))
				ft_putchar('A');
			else if ((row == 1 && col == x) || (row == y && col == 1 && y > 1))
				ft_putchar('C');
			else if (row > 1 && row < y && col > 1 && col < y)
				ft_putchar(' ');
			else
				ft_putchar('B');
			col++;
		}
		col = 1;
		if (x != 0 && y != 0)
			ft_putchar('\n');
		row++;
	}
}
