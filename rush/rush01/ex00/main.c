/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparejo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:03:55 by jparejo-          #+#    #+#             */
/*   Updated: 2020/12/06 22:36:14 by jparejo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		error_strlen(char **c);
int		error_char(char **c);
void	split_param(char **c, int *u, int *d, int *l, int *r);
int		error_repeat(int *c);
int		possibles_nbr(int *up, int *down, int *left, int *right);
int		**create_map(int **posibles);
void	print_map(int **map);

int		main(int argc, char **argv)
{
	int		up[4];
	int		down[4];
	int		left[4];
	int		right[4];
	int		**map;

	if (error_strlen(argv) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (error_char(argv) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (error_repeat(argv) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	split_param(argv, up, down, left, right);
	posibles = possibles_nbr(up, down, col, right);
	map = create_map(posibles);
	print_map(map);
}
