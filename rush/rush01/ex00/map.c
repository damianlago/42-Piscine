/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 18:07:12 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/06 22:40:53 by jparejo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		possibles_nbr(int *up, int *down, int *left, int *right)
{
	int i;
	int **posibles = NULL;

	i = 0;
	while (i < 4)
	{
		if (up[i] == 1)
			posibles[0][i] = 4;
		if (up[i] == 4)
			posibles[0][i] = 1;
		if (down[i] == 1)
			posibles[3][i] = 4;
		if (down[i] == 4)
			posibles[3][i] = 1;
		if (left[i] == 1)
			posibles[i][0] = 4;
		if (left[i] == 4)
			posibles[i][0] = 1;
		if (right[i] == 4)
			posibles[i][3] = 1;
		if (right[i] == 1)
			posibles[i][3] = 4;
		i++;
	}
	return (posibles);
}

int		**create_map(int **posibles)
{
	int **map;
	int i;
	int j;

	i = 0;
	j = 0;
	map = (int**)malloc(sizeof(int *) * 4);
	while (i < 4)
	{
		map[i] = (int *)malloc(sizeof(int) * 4);
		while (j < 4)
		{
			map[i][j] = posibles[i][j];
			j++;
		}
		j = 0;
		i++;
	}
	return (map);
}

void	print_map(int **map)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			ft_putchar(map[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
		j = 0;
		ft_putchar('\n');
		i++;
	}
}
