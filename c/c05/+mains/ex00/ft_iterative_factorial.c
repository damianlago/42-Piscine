/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 20:29:03 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/16 19:32:52 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int res;
	int i;

	res = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}

int		main(void)
{
	printf("%d", ft_iterative_factorial(-2));
	return (0);
}
