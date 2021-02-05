/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 11:36:28 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/02 15:45:06 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int i;

	i = 0;
	if (0 < n < 10)
	{
		while (i <= n)
		{
			
			i++,
		}
	}
}

int		main(void)
{
		ft_print_combn(2);
		return (0);
}
