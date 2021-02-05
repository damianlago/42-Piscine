/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 19:35:46 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/10 10:41:14 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;
   
	i = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char dest[] = "HOLA";
	char src[] = "quepasa";
	ft_strcat(dest, src);
	printf("%s", dest);	
	return (0);
}
