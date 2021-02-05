/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:31:01 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/10 11:13:16 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int z;

	i = 0;
	z = ft_strlen(dest);

	while (src[i] != '\0' && i < nb)
		dest[z++] = src[i++];
	dest[z] = '\0';
	return (dest);
}

int		main(void)
{
	char dest[7] = "Calamar";
	char src[4] = "Hola";
	unsigned int nb = 2;
	printf("%s", ft_strncat(dest, src, nb));
	//printf("%s", strncat(dest, src, nb));
	return (0);
}
