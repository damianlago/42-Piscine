/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 12:00:02 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/11/29 15:09:25 by dlago-mo         ###   ########.fr       */
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
	while (row <= y && y != 0)
	{
		while (col <= x && x != 0)
		{
			if ((row == 1 && col == 1) || (row == y && col == x && x > 1))
				ft_putchar('/');
			else if ((row == y && col == 1) || (row == 1 && col == x))
				ft_putchar('\\');
			else if (row > 1 && row < y && col > 1 && col < x)
				ft_putchar(' ');
			else
				ft_putchar('*');
			col++;
		}
		col = 1;
		if (x != 0 && y != 0)
			ft_putchar('\n');
		row++;
	}
}
