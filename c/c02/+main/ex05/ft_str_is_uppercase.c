/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:23:33 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/08 12:33:31 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
	   return (1);	
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	char str[] = "RifiwiFDOKOR";
	int i = ft_str_is_uppercase(str);
	printf("%d", i);
	return (0);
}
