/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:01:13 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/13 16:57:06 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			 return	(s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		main(void)
{
	char s1[] = "";
	char s2[] = "abcd";
	printf("%d", ft_strcmp(s1, s2));
	return (0);
}
