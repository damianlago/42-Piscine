/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparejo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:19:27 by jparejo-          #+#    #+#             */
/*   Updated: 2020/12/06 22:35:08 by jparejo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		error_strlen(char **c)
{
	int n;

	n = 0;
	while (c[1][n] != '\0')
	{
		n++;
	}
	if (n != 31)
		return (0);
	return (1);
}

int		error_char(char **c)
{
	int		cont_n;
	int		cont_s;
	int		n;

	n = 0;
	cont_n = 0;
	cont_s = 1;
	while (c[1][n] != '\0')
	{
		if ((c[1][cont_n] < '0') || (c[1][cont_n] > '4'))
			return (0);
		if (c[1][cont_s] != ' ')
			return (0);
		cont_n = cont_n + 2;
		cont_s = cont_s + 2;
		n++;
	}
	return (1);
}

int		check_values(int c[4][1])
{
	if (c[0][0] > 1)
		return (0);
	if (c[1][0] > 3)
		return (0);
	if (c[2][0] > 2)
		return (0);
	if (c[3][0] > 1)
		return (0);
	return (1);
}

int		error_repeat(int *c)
{
	int n;
	int values[4][1];

	n = 0;
	values[0][0] = 0;
	values[1][0] = 0;
	values[2][0] = 0;
	values[3][0] = 0;
	while (n < 4)
	{
		if (c[n] == '1')
			values[0][0]++;
		else if (c[n] == '2')
			values[1][0]++;
		else if (c[n] == '3')
			values[2][0]++;
		else if (c[n] == '4')
			values[3][0]++;
		n++;
	}
	return (check_values(values));
}
