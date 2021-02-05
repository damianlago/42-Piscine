/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:23:08 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/13 20:32:13 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
