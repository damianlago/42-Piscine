/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 18:03:09 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/06 22:35:57 by jparejo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H

#define SUDOKU_H

#include <unistd.h>

#include <stdio.h>

#include <stdlib.h>

int		**create_map();
void	print_map(int **map);

#endif
