/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:39:32 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/08 12:48:03 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char dest[5];
	char src[] = "Hello W  d   42";

	ft_strcpy(dest, src);
	int i = 0;
	while (dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}
	return (0);
}
