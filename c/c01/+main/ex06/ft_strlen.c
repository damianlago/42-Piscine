/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 15:26:22 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/03 16:15:32 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++ != '\0')
		i++;
	return (i);
}

int		main(void)
{
	char len[] = "Seis";
	int i = ft_strlen(len);
	printf("%d", i);
}
