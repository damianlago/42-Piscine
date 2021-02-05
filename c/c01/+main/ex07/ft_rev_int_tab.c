/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlago-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:04:26 by dlago-mo          #+#    #+#             */
/*   Updated: 2020/12/03 14:59:13 by dlago-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp[size];

	i = 0;
	j = 0;
	while (i < size)
	{
		temp[i] = tab[size - 1 -i];
		i++;
	}
	while (i < size)
	{
		tab[j] = temp[j];
		j++;
	}
}

int		main(void)
{
	int i;
	int tab[] = {1,1,1,1};
	int size = 4;
	ft_rev_int_tab(tab, size);
	for(i = 0;i < size;i++)
		printf("%d\n", tab[i]);
	return (0);
}
