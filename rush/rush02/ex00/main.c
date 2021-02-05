/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 11:50:24 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/13 20:52:05 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#include <stdio.h>

int		ft_atoi(char *str);

int		errors_verif(int argc, char **argv)
{
	unsigned int	num;

	if (argc == 2 || argc == 3)
	{
		if (argc == 2)
		{
			num = ft_atoi(argv[1]);
		}
		else if (argc == 3)
		{
			num = ft_atoi(argv[2]);
		}
		return (0);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	unsigned int	num;

	num = errors_verif(argc, argv);
}
