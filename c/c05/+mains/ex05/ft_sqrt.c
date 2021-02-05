/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 11:21:34 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/16 19:25:44 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_sqrt(int nb)
{
	int a;

	a = 0;
	if (nb < 1)
		return (0);
	else
	{
		while (a * a <= nb && a < 46341)
		{
			if (a * a == nb)
				return (a);
			a++;
		}
		return (0);
	}
}

int		main(void)
{
	printf("%d", ft_sqrt(4));
	return (0);
}
