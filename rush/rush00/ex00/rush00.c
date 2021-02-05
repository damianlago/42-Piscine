/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:47:14 by ssanz-al          #+#    #+#             */
/*   Updated: 2020/11/29 14:22:37 by ssanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int v;
	int h;

	v = 1;
	while (v <= y)
	{
		h = 1;
		while (h <= x)
		{
			if ((v == 1 || v == y) && (h == 1 || h == x))
				ft_putchar('o');
			else if ((v > 1 && h == 1) || (h == x && v > 1))
				ft_putchar('|');
			else if ((v == 1 || v == y) || (h == 1 || h == x))
				ft_putchar('-');
			else
				ft_putchar(' ');
			h++;
		}
		ft_putchar('\n');
		v++;
	}
}
