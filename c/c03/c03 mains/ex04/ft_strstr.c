/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:23:08 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/13 20:28:50 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *src, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (src);
	while (src[i])
	{
		j = 0;
		while (src[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&src[i]);
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	char src[] = "Hola esto como estas";
	char to_find[] = "ta";
	printf("%s", ft_strstr(src, to_find));
	return (0);
}
