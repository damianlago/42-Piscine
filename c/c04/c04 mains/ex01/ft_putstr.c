/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 14:49:51 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/15 14:12:23 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		ft_putchar(src[i++]);
}

int		main(void)
{
	char src[] = "Pepe";
	ft_putstr(src);
	return (0);
}
