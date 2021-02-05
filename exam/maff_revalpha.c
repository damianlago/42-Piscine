/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 17:23:57 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/16 18:09:17 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char a;
	char b;
	int i;

	a = 'Z';
	b = 'z';
	i = 0;
	while (i < 26)
	{
		if (i % 2 == 0)
			ft_putchar(a - i);
		else
			ft_putchar(b - i);
		i++;
	}
	return (0);
}
