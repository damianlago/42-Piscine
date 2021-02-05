/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:31:13 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/10 11:41:55 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int a;
	int b;
	unsigned int c;
	unsigned int i;

	a = ft_strlen(dest);
	b = ft_strlen(src);
	c = a + b;
	i = 0;
	if (c < a)
	{
		while (src[i] != '\0' && i < (size -1))
			dest[a++] = src[i++];
		dest[a] = '\0';
		return (c);
	}
	return (0);
}

int				main(void)
{
	char dest[15] = "Hola";
	char src[] = "Calamar";
	unsigned int size = 19;
	printf("%d", ft_strlcat(dest, src, size));
}
