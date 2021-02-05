/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 20:39:16 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/13 20:48:29 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	ft_check_dec(int x)
{
	if (x >= 20 && x < 30)
		return (20);
	else if (x >= 30 && x < 40)
		return (30);
	else if (x >= 40 && x < 50)
		return (40);
	else if (x >= 50 && x < 60)
		return (50);
	else if (x >= 60 && x < 70)
		return (60);
	else if (x >= 70 && x < 80)
		return (70);
	else if (x >= 80 && x < 90)
		return (80);
	else if (x >= 90 && x < 100)
		return (90);
	else
		return (0);
}

int		ft_check_cent(int x)
{
	if (x >= 0 && x < 20)
		return (x);
	else if (x >= 20 && x < 100)
		return (ft_check_dec(x));
	else if (x >= 100 && x < 1000)
		return (100);
	else if (x >= 1000 && x < 1000000)
		return (1000);
	else if (x >= 1000000 && x < 1000000000)
		return (1000000);
	else
		return (0);
}
