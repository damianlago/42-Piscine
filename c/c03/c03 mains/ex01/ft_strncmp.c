/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:09:14 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/13 17:21:00 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] || s2[i]) && i <= (n - 1))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

//int		ft_strncmp(char *s1, char *s2, unsigned int n)
//{
//	unsigned int i;

//	i = 0;
//	if (n == 0)
//		return (0);
//	while (s1[i] && s2[i] && s1[i] == s2[i] && i < (n - 1))
//			i++;
//	return (s1[i] - s2[i]);
//}

int		main(void)
{
	unsigned int n = 5;
	char s1[] = "abcdee";
	char s2[] = "abcdEe";
	printf("%d", ft_strncmp(s1, s2, n));
	return (0);
}
