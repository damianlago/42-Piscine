/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:05:10 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/16 19:59:41 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int i, a, b;

	i = 0;
	a = 0;
	b = 0;
	if (argc != 2)
		ft_putchar('\n');
	
	
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				a = argv[1][i] - 97;
				while (a >= 0)
				{
					ft_putchar(argv[1][i]);
					a--;
				}
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				b = argv[1][i] - 65;
				while (b >= 0)
				{
					ft_putchar(argv[1][i]);
					b--;
				}
			}
			else
				ft_putchar('\n');
			i++;
		}
}
