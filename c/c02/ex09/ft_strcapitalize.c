/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 13:02:08 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/08 19:19:55 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && ((str[i - 1] >= 32
		&& str[i - 1] <= 47) || i == 0 || (str[i - 1] >= 58 &&
		str[i - 1] <= 64) || (str[i - 1] >= 91 && str[i - 1] <= 96)
		|| (str[i - 1] >= 123 && str[i - 1] <= 126)))
			str[i] -= 32;
		i++;
	}
	return (str);
}
